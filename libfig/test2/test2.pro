QT += core
QT -= gui

CONFIG += c++11

TARGET = test2
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp

unix: LIBS += -L$$PWD/../figures/ -lfigures.1.0.0

INCLUDEPATH += $$PWD/../figures
DEPENDPATH += $$PWD/../figures
