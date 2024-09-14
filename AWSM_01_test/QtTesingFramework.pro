QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES +=  tst_a.cpp \
    main.cpp \
    tst_b.cpp

HEADERS += \
    tst_a.h \
    tst_b.h
