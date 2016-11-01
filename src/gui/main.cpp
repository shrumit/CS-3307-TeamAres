#include <iostream>
#include <stdio.h>
#include <QApplication>
#include <QTreeView>

#include "gui/mainwindow.h"
#include "database/TestCSVReader.h"

#include "tests/FileLoadTest.h"
#include "tests/InputValidityTest.h"
#include "tests/DateTest.h"

using namespace std;

int main(int argc, char *argv[]) {
    int test = 1;   /* test off when  0 */
    QApplication app(argc, argv);
    MainWindow w;

    if (test) {

        FileLoadTest *test_flt = new FileLoadTest();
        QTest::qExec(test_flt);

        // NB: You must click "Discard" for all the windows that pop up
        // if MainWindow::close() does not work as intended
        InputValidityTest *test_ivt = new InputValidityTest();
        QTest::qExec(test_ivt);

        // NB: We've had intermittent problems with this test.
        // If it produces errors, please comment it out
        DateTest *test_dt = new DateTest();
        QTest::qExec(test_dt);


        //old test code that came with project
        /*
        TestCSVReader testReader;
        bool pass = testReader.CSV_READER_TEST_01();
        if (pass) cout << "TEST_01 PASSED !\n";
        else cout << "TEST_01 FAILED !\n";
        pass = testReader.CSV_READER_TEST_02();
        if (pass) cout << "TEST_02 PASSED !\n";
        else cout << "TEST_02 FAILED !\n";
        pass = testReader.CSV_READER_TEST_03();
        if (pass) cout << "TEST_03 PASSED !\n";
        else cout << "TEST_03 FAILED !\n";
        pass = testReader.CSV_READER_TEST_04();
        if (pass) cout << "TEST_04 PASSED !\n";
        else cout << "TEST_04 FAILED !\n";
        pass = testReader.CSV_READER_TEST_05();
        if (pass) cout << "TEST_05 PASSED !\n";
        else cout << "TEST_05 FAILED !\n";
        pass = testReader.CSV_READER_TEST_06();
        if (pass) cout << "TEST_06 PASSED !\n";
        else cout << "TEST_06 FAILED !\n";
        pass = testReader.CSV_READER_TEST_07();
        if (pass) cout << "TEST_07 PASSED !\n";
        else cout << "TEST_07 FAILED !\n";
        pass = testReader.CSV_READER_TEST_08();
        if (pass) cout << "TEST_08 PASSED !\n";
        else cout << "TEST_08 FAILED !\n";
        testReader.CSV_READER_TEST_ALL();*/

    }


    w.show();

    return app.exec();
}
