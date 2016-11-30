TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

LIBS+=`sdl-config --libs` -lSDL_image -lSDL_ttf

INCLUDEPATH+=-I/usr/include/SDL/

QMAKE_CXXFLAGS += -std=c++11 -pedantic -Wall -Wextra

SOURCES += main.cpp \
    monster.cpp \
    function.cpp \
    grid.cpp \
    home.cpp \
    levels.cpp \
    obstacle.cpp

HEADERS += \
    monster.h \
    function.h \
    grid.h \
    home.h \
    levels.h \
    obstacle.h

