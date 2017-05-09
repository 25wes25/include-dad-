#-------------------------------------------------
#
# Project created by QtCreator 2017-04-20T15:55:17
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CoolCats
TEMPLATE = app


SOURCES += main.cpp\
    canvas.cpp\
    loginscreen.cpp \
    users.cpp \
    maininterface.cpp \
    Circle.cpp \
    Ellipse.cpp \
    Rectangle.cpp \
    Square.cpp \
    shape.cpp


HEADERS  += loginscreen.h \
    canvas.h\
    users.h \
    Vector.h\
    maininterface.h \
    Circle.h \
    Ellipse.h \
    Line.h \
    PolyGon.h \
    PolyLine.h \
    Rectangle.h \
    Square.h \
    Vector.h \
    shape.h


FORMS    += loginscreen.ui \
    maininterface.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
