QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = bgui
TEMPLATE = app

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui


win32:CONFIG(release, debug|release): LIBS += -L$$PWD/./release/ -lbolg
else:win32:CONFIG(debug, debug|release): LIBS += -L$$PWD/./debug/ -lbolg
else:unix: LIBS += -L$$PWD/./ -lbolg

INCLUDEPATH += $$PWD/release
DEPENDPATH += $$PWD/release
