#-------------------------------------------------
#
# Project created by QtCreator 2017-09-26T11:08:59
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = shape_to_pointscloud
TEMPLATE = app

INCLUDEPATH += /usr/local/include/
INCLUDEPATH += /usr/local/Cellar/
INCLUDEPATH += /usr/local/Cellar/opencv/2.4.13/include

SOURCES += main.cpp\
        mainwindow.cpp \
    dragzoomqlabel.cpp

HEADERS  += mainwindow.h \
    dragzoomqlabel.h

FORMS    += mainwindow.ui

LIBS += -L/usr/local/Cellar/opencv/2.4.13/lib \
-lopencv_core \
-lopencv_highgui \
-lopencv_imgproc

RESOURCES += \
    ressources.qrc
