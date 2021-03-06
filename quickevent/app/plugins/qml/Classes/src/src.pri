message(including $$PWD)

HEADERS += \
	$$PWD/classespluginglobal.h \
    $$PWD/thispartwidget.h \
    $$PWD/classeswidget.h \
    $$PWD/coursedef.h \
    $$PWD/editcodeswidget.h \
    $$PWD/editcourseswidget.h \
    $$PWD/editcoursecodeswidget.h \
    $$PWD/classestableview.h \
    $$PWD/classdefdocument.h \
    $$PWD/classdefwidget.h

SOURCES += \
	$$PWD/plugin.cpp \
    $$PWD/thispartwidget.cpp \
    $$PWD/classeswidget.cpp \
    $$PWD/coursedef.cpp \
    $$PWD/editcodeswidget.cpp \
    $$PWD/editcourseswidget.cpp \
    $$PWD/editcoursecodeswidget.cpp \
    $$PWD/classestableview.cpp \
    $$PWD/classdefdocument.cpp \
    $$PWD/classdefwidget.cpp

FORMS += \
    $$PWD/classeswidget.ui \
    $$PWD/editcodeswidget.ui \
    $$PWD/editcourseswidget.ui \
    $$PWD/editcoursecodeswidget.ui \
    $$PWD/classdefwidget.ui

include ( $$PWD/Classes/Classes.pri )
include ( $$PWD/drawing/drawing.pri )
