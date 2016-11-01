#ifndef DATETEST_H
#define DATETEST_H

#include <QtTest/QtTest>
#include "QPushButton"
#include "QTabWidget"
//#include "QToolButton"
#include "iostream"
#include "QDate"
#include "QDateEdit"
#include "QMainWindow"
#include "gui/mainwindow.h"
#include "database/RecordsManager.h"
#include "QFileDialog"

class DateTest: public QObject
{
    Q_OBJECT

private slots:
    void dateTest1();
    void dateTest2();
    void dateTest3();
};


#endif // DATETEST_H
