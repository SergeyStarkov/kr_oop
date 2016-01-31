#-------------------------------------------------
#
# Project created by QtCreator 2016-01-30T14:50:01
#
#-------------------------------------------------

QT       += core gui webkit webkitwidgets sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = oop_DoublyLinkedList
TEMPLATE = app


SOURCES += main.cpp\
    author.cpp \
    main_window.cpp \
    theoryform.cpp \
    demoform.cpp \
    testform.cpp \
    historyform.cpp \
    sql.cpp

HEADERS  +=  author.h \
    main_window.h \
    theoryform.h \
    demoform.h \
    testform.h \
    historyform.h \
    sql.h

FORMS    += \
    author.ui \
    main_window.ui \
    theoryform.ui \
    demoform.ui \
    testform.ui \
    historyform.ui
