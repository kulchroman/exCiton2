#-------------------------------------------------
#
# Project created by QtCreator 2014-11-19T19:05:42
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test2
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    physics.cpp \
    modeling.cpp \
    help_file.cpp

HEADERS  += mainwindow.h \
    physics.h \
    modeling.h \
    help_file.h

FORMS    += mainwindow.ui

CONFIG += qwt

INCLUDEPATH += /usr/local/qwt-6.1.1/include


LIBS += -L/usr/local/qwt-6.1.1/lib -lqwt


