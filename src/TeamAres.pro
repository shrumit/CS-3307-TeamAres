#-------------------------------------------------
#
# Project created by QtCreator 2015-10-21T14:49:31
#
#-------------------------------------------------

QT              += testlib
QT              += core gui
QT              += charts
CONFIG          += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets printsupport

TARGET = TeamAres
TEMPLATE = app

DISTFILES += \
    TeamAres.pro.user

HEADERS += \
    gui/CustomSort.h \
    gui/ErrorEditDialog.h \
    gui/mainwindow.h \
    database/CSVReader.h \
    database/RecordsManager.h \
    database/QSortListIO.h\
    datamodel/TreeItem.h \
    datamodel/TreeModel.h \
    datamodel/PresentationTreeModel.h \
    datamodel/PublicationTreeModel.h \
    datamodel/GrantFundingTreeModel.h \
    datamodel/TeachingTreeModel.h \
    database/TestCSVReader.h \
    tests/FileLoadTest.h \
    tests/InputValidityTest.h \
    tests/DateTest.h \
    gui/teachadvsearch.h \
    gui/fundadvsearch.h \
    gui/presadvsearch.h \
    gui/pubadvsearch.h \
    gui/load.h \
    gui/confirmation.h


SOURCES += \
    gui/CustomSort.cpp \
    gui/ErrorEditDialog.cpp \
    gui/main.cpp \
    gui/mainwindow.cpp \
    database/CSVReader.cpp \
    database/RecordsManager.cpp \
    database/QSortListIO.cpp \
    datamodel/TreeItem.cpp \
    datamodel/TreeModel.cpp \
    datamodel/PresentationTreeModel.cpp \
    datamodel/PublicationTreeModel.cpp \
    datamodel/GrantFundingTreeModel.cpp \
    datamodel/TeachingTreeModel.cpp \
    database/TestCSVReader.cpp \
    tests/InputValidityTest.cpp \
    tests/FileLoadTest.cpp \
    tests/DateTest.cpp \
    gui/teachadvsearch.cpp \
    gui/fundadvsearch.cpp \
    gui/presadvsearch.cpp \
    gui/pubadvsearch.cpp \
    gui/load.cpp \
    gui/confirmation.cpp

FORMS += \
    gui/customsort.ui \
    gui/mainwindow.ui \
    gui/ErrorEditDialog.ui \
    gui/teachadvsearch.ui \
    gui/fundadvsearch.ui \
    gui/presadvsearch.ui \
    gui/pubadvsearch.ui \
    gui/load.ui \
    gui/confirmation.ui

RESOURCES += \
    images.qrc
