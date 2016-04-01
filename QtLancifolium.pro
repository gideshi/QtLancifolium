#-------------------------------------------------
#
# Project created by QtCreator 2016-03-04T00:23:47
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QtLancifolium
TEMPLATE = app
RC_ICONS = images/Lancifolium.ico


SOURCES += main.cpp\
        QtLancifolium.cpp \
    DevLancifolium.cpp \
    GnCalculate.cpp \
    GnNode.cpp \
    Formatting.cpp

HEADERS  += QtLancifolium.h \
    DevLancifolium.h \
    GnCalculate.h \
    GnNode.h \
    FunLancifolium.h \
    Formatting.h

FORMS    += QtLancifolium.ui \
    Formatting.ui

RESOURCES += \
    images.qrc