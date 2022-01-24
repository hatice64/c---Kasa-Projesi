TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    veriler/gelirmiktariverisi.cpp \
    veriler/gidermiktariverisi.cpp \
    veriler/islemdeposu.cpp \
    islemler/gelirmiktariislemi.cpp \
    islemler/gidermiktariislemi.cpp \
    islemler/kasahareketleri.cpp \
    islemler/menu.cpp

HEADERS += \
    veriler/gelirmiktariverisi.h \
    veriler/gidermiktariverisi.h \
    veriler/islemdeposu.h \
    islemler/gelirmiktariislemi.h \
    islemler/gidermiktariislemi.h \
    islemler/kasahareketleri.h \
    islemler/menu.h
