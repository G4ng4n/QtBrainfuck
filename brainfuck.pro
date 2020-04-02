#-------------------------------------------------
#
# Project created by QtCreator 2020-04-01T19:35:50
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = brainfuck
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    Brainfuck.cpp \
    Debugger.cpp \
    graphwidget.cpp

HEADERS  += mainwindow.h \
    Brainfuck.h \
    Debugger.h \
    graphwidget.h

FORMS    += mainwindow.ui

RESOURCES += \
    icon.qrc
