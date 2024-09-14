QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

# # Enable coverage
# CONFIG(debug, debug|release) {
#     QMAKE_CXXFLAGS += -fprofile-arcs -ftest-coverage
#     QMAKE_LFLAGS   += -fprofile-arcs -ftest-coverage
#     LIBS += -lgcov
# }


SOURCES +=  tst_test_string.cpp \
    main.cpp \
    tst_test_calc.cpp
