#-------------------------------------------------
#
# Project created by QtCreator 2013-11-28T15:29:24
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HAT1
TEMPLATE = app


SOURCES += main.cpp\
        hat.cpp

HEADERS  += hat.h \
         beeper.h

FORMS    += hat.ui

LIBS += -L/usr/lib -lSDL
INCLUDEPATH = usr/include
