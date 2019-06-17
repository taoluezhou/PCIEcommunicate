#-------------------------------------------------
#
# Project created by QtCreator 2019-03-13T19:25:08
#
#-------------------------------------------------

DEFINES  -= UNICODE
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = PCIEcommunicate
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    PCIE.cpp

HEADERS  += mainwindow.h \
    PCIE.h \
    TERASIC_PCIE.h

FORMS    += mainwindow.ui
