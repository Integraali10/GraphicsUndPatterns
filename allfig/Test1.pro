QT += core
QT += gui
QT += widgets
CONFIG += c++11

TARGET = test1
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += \
    test1.cpp

win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./release/ -lbolg
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./debug/ -lbolg
else:unix: LIBS += -L$$PWD/./ -lbolg

INCLUDEPATH += $$PWD/release
DEPENDPATH += $$PWD/release
