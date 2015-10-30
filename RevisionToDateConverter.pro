#-------------------------------------------------
#
# Project created by QtCreator 2015-10-29T08:46:56
#
#-------------------------------------------------

QT += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG(debug, debug|release) {
	DESTDIR = $$OUT_PWD/build/debug
	message("Configuring Makefile for DEBUG compilation . . .")
} else {
	DESTDIR = $$OUT_PWD/build/release
	message("Configuring Makefile for RELEASE compilation . . .")
}

TARGET = RevisionToDateConverter

TEMPLATE = app

SOURCES +=	main.cpp\
		mainwindow.cpp \
		time_delta.cpp

HEADERS +=	mainwindow.h \
		time_delta.h

FORMS +=	mainwindow.ui

RESOURCES +=	resources.qrc

DISTFILES +=
