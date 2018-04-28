QT-= gui
QT+= widgets
TARGET = bolg
TEMPLATE = lib

DEFINES += BOLG_LIBRARY

SOURCES += cont.cpp \
        shape.cpp \
        triangle.cpp \
        circle.cpp \
        rectangle.cpp

HEADERS += cont.h\
        cont_global.h \
        shape.h \
        triangle.h \
        circle.h \
        rectangle.h
unix {
    target.path = /usr/lib
    INSTALLS += target
}
