QT += core
QT -= gui

CONFIG += c++11

TARGET = test1
CONFIG += console

TEMPLATE = app

SOURCES += main.cpp


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../libfig/build-figures-Desktop_Qt_5_9_1_MinGW_64bit-Release/release/ -llibfigures.dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../libfig/build-figures-Desktop_Qt_5_9_1_MinGW_64bit-Release/debug/ -llibfigures.dll
else:unix: LIBS += -L$$PWD/../../libfig/build-figures-Desktop_Qt_5_9_1_MinGW_64bit-Release/ -llibfigures.dll

INCLUDEPATH += $$PWD/../../libfig/figures
DEPENDPATH += $$PWD/../../libfig/figures
