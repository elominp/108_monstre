#-------------------------------------------------
#
# Project created by QtCreator 2015-03-17T15:43:08
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = 108monstre
TEMPLATE = app


SOURCES += main.cpp\
        mainwidget.cpp \
    qt-plugins/qcustomplot.cpp

HEADERS  += mainwidget.h \
    qt-plugins/qcustomplot.h

FORMS    += mainwidget.ui
