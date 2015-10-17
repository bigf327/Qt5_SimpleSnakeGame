#-------------------------------------------------
#
# Project created by QtCreator 2015-10-15T11:34:20
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = SimpleSnakeGame
TEMPLATE = app


SOURCES += main.cpp\
        game.cpp \
    field.cpp \
    snake.cpp \
    food.cpp

HEADERS  += game.h \
    field.h \
    snake.h \
    food.h

FORMS    += game.ui
