#-------------------------------------------------
#
# Project created by QtCreator 2014-11-23T13:08:51
#
#-------------------------------------------------

QT       += core gui
QT       += sql
#QTPLUGIN += qsqlmysql

#INCLUDEPATH +=/usr/include/mysql
#LIBS +=-L/usr/lib/x86_64-linux-gnu

# /opt/Qt/Tools/QtCreator/bin/plugins/sqldrivers/
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtbdd
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
