#-------------------------------------------------
#
# Project created by QtCreator 2015-10-29T08:46:56
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = RevisionToDateConverter
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    time_delta.cpp

HEADERS  += mainwindow.h \
    time_delta.h

FORMS    += mainwindow.ui

RESOURCES += \
    resources.qrc

DISTFILES +=
