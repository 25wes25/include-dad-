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
        dialog.cpp \
    loginscreen.cpp \
    users.cpp \
    maininterface.cpp

HEADERS  += dialog.h \
    loginscreen.h \
    users.h \
    maininterface.h

FORMS    += dialog.ui \
    loginscreen.ui \
    maininterface.ui

DISTFILES +=

RESOURCES += \
    resources.qrc
