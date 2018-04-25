QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = untitled3
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    moveitem.cpp

HEADERS  += widget.h \
    moveitem.h

FORMS    += widget.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/../../libfig/build-figures-Desktop_Qt_5_9_1_MinGW_64bit-Release/release/ -llibfigures.dll
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/../../libfig/build-figures-Desktop_Qt_5_9_1_MinGW_64bit-Release/debug/ -llibfigures.dll
else:unix: LIBS += -L$$PWD/../../libfig/build-figures-Desktop_Qt_5_9_1_MinGW_64bit-Release/ -llibfigures.dll

INCLUDEPATH += $$PWD/../../libfig/figures
DEPENDPATH += $$PWD/../../libfig/figures
