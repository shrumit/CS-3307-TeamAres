#ifndef MAINWINDOWTEST_H
#define MAINWINDOWTEST_H

#include <QtTest/QtTest>
//#include <QApplication>
#include "../gui/mainwindow.h"
//#include "QStringList"
//#include "QDir"


class InputValidityTest: public QObject
{
    Q_OBJECT

private:
    enum TABS {
        TEACH, PUBLICATIONS, PRESENTATIONS, FUNDING
    };

private slots:
    void checkFileValid();
    void checkFileNonexistent();
    void checkFileMismatchedType();
    void checkFileMissingMandatory();
    void checkFileMissingNonMandatory();
//  void checkDetectsMissingMandatoryCells();
    void checkDetectsTeach();
    void checkDetectsPub();
    void checkDetectsPres();
    void checkDetectsFund();
};

#endif // MAINWINDOWTEST_H
