#include "sheet.h"

using namespace qf::qmlwidgets::reports::style;

Sheet::Sheet(QObject *parent)
	: QObject(parent)
{
	qfLogFuncFrame();
}

Sheet::~Sheet()
{
	qfLogFuncFrame();
    //qDeleteAll(m_colors); it seems that QQmlListProperty itself handles color children parentship
}

QObject *Sheet::styleObjectForName(IStyled::StyleGroup style_object_group, const QString &name, bool should_exist)
{
    ObjectMap om = m_definedStyles.value(style_object_group);
    QObject *ret = om.value(name);
    if(ret == nullptr && should_exist)
        qfError() << "Cannot find style object for " << style_object_group + "::" + name;
    return ret;
}

void Sheet::setStyleObjectForName(IStyled::StyleGroup style_object_group, const QString &name, QObject *o)
{
    ObjectMap &om = m_definedStyles[style_object_group];
    if(o)
        om[name] = o;
	else
        om.remove(name);
}

QQmlListProperty<Color> Sheet::colors()
{
	/// Generally this constructor should not be used in production code, as a writable QList violates QML's memory management rules. However, this constructor can be very useful while prototyping.
	return QQmlListProperty<Color>(this, m_colors);
}

QQmlListProperty<Pen> Sheet::pens()
{
	return QQmlListProperty<Pen>(this, m_pens);
}
