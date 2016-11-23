TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS+=`sdl-config --libs` -lSDL_image -lSDL_ttf

INCLUDEPATH+=-I/usr/include/SDL/

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra

SOURCES += main.cpp \
    functions.cpp \
    monster.cpp \
    level0.cpp \
    home.cpp \
    grid.cpp

HEADERS += \
    functions.h \
    monster.h \
    levels.h \
    home.h \
    grid.h

