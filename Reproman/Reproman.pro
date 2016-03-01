#-------------------------------------------------
#
# Project created by QtCreator 2016-03-01T16:28:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Reproman
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    ../task.cpp \
    ../project.cpp \
    user.cpp

HEADERS  += mainwindow.h \
    ../task.h \
    ../project.h \
    user.h

FORMS    += mainwindow.ui
