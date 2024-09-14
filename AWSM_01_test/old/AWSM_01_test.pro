QT += testlib widgets
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += ../mainwindow.cpp
HEADERS += ../mainwindow.h
FORMS += ../mainwindow.ui

SOURCES +=  tst_test_string.cpp \
    main.cpp \
    tst_test_calc.cpp

