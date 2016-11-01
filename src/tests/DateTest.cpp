#include "DateTest.h"

//Checks if the begining date year can be greater then the ending dates year
//Makes sure that the spinner cant be set to a value that is invalid for any data set
void DateTest::dateTest1(){
    QWidget *pWin = QApplication::activeWindow();
    QDateEdit* date = pWin->findChild<QDateEdit*>("FromDate");
    QDateEdit* end = pWin ->findChild<QDateEdit*>("ToDate");
    QDate year(3000,1,1);
    date->setDate(year);
    bool checkOne = (end->date().year() <= year.year());
    bool checkTwo = (date->date().year()<= end->date().year());
    bool checkThree = (date->date().year() != year.year());
    QCOMPARE((checkOne == true && checkTwo == true && checkThree == true), true);
}

//Tests if the end year can be set to less then the starting year
void DateTest::dateTest2(){
    QWidget *pWin = QApplication::activeWindow();
    QDateEdit* date = pWin->findChild<QDateEdit*>("FromDate");
    QDateEdit* end = pWin ->findChild<QDateEdit*>("ToDate");
    QDate year(1940,1,1);
    end->setDate(year);
    bool checkOne = (date->date().year() >= year.year());
    bool checkTwo = (date->date().year() <= end->date().year());
    bool checkThree = (end->date().year() != year.year());
    QCOMPARE((checkOne == true && checkTwo == true && checkThree == true), true);
}

//Tests that the if the year is less then the end year that it is registered correctly
void DateTest::dateTest3() {
    QWidget *pWin = QApplication::activeWindow();
    QDateEdit *date = pWin->findChild<QDateEdit*>("FromDate");
    QDateEdit *end = pWin ->findChild<QDateEdit*>("ToDate");
    QDate year(2000,1,1);
    date->setDate(year);
    bool checkOne = (end->date().year() >= year.year());
    bool checkTwo = (date->date().year() <= end->date().year());
    bool checkThree = (date->date().year() == year.year());
    QCOMPARE((checkOne == true && checkTwo == true && checkThree == true), true);
    QVERIFY(true);
}
