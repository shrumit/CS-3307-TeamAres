#include "InputValidityTest.h"
#include <iostream>

// Checks if a valid file loads properly
void InputValidityTest::checkFileValid() {
    MainWindow mw;
    QVERIFY(mw.checkFile(FUNDING, QString("../src/tests/test_samples/GrantsClinicalFunding_sample.csv")) == EXIT_SUCCESS);
    mw.close();
}

// Checks if nonexistent files are handled
void InputValidityTest::checkFileNonexistent() {
    MainWindow mw;
    QVERIFY(mw.checkFile(0, QString("nonexistent.csv")) == EXIT_FAILURE);
    mw.close();
}

// Checks if loading the wrong category of file is handled
void InputValidityTest::checkFileMismatchedType() {
    MainWindow mw;
    QVERIFY(mw.checkFile(TEACH, QString("../src/tests/test_samples/GrantsClinicalFunding_sample.csv")) == EXIT_FAILURE);
    mw.close();
}

// Checks if missing mandatory columns is handled
void InputValidityTest::checkFileMissingMandatory() {
    MainWindow mw;
    QVERIFY(mw.checkFile(FUNDING, QString("../src/tests/test_samples/GrantsClinicalFunding_sample_missingMandatory.csv")) == EXIT_FAILURE);
    mw.close();
}

// Checks if missing non-mandatory columns is handled
void InputValidityTest::checkFileMissingNonMandatory() {
    MainWindow mw;
    QVERIFY(mw.checkFile(FUNDING, QString("../src/tests/test_samples/GrantsClinicalFunding_sample_missingNonMandatory.csv")) == EXIT_SUCCESS);
    mw.close();
}

// Checks type autodetect for Teaching
void InputValidityTest::checkDetectsTeach() {
    MainWindow mw;
    bool flag = mw.teachPath.isEmpty();
    QStringList filePath;
    filePath << "../src/tests/test_samples/Teaching_sample.csv";
    mw.loadFileUnspecifiedType(filePath);
    QVERIFY(flag && !mw.teachPath.isEmpty());
    mw.close();
}

// Checks type autodetect for Publications
void InputValidityTest::checkDetectsPub() {
    MainWindow mw;
    bool flag = mw.pubPath.isEmpty();
    QStringList filePath;
    filePath << "../src/tests/test_samples/Publications_sample.csv";
    mw.loadFileUnspecifiedType(filePath);
    QVERIFY(flag && !mw.pubPath.isEmpty());
    mw.close();
}

// Checks type autodetect for Presentations
void InputValidityTest::checkDetectsPres() {
    MainWindow mw;
    bool flag = mw.presPath.isEmpty();
    QStringList filePath;
    filePath << "../src/tests/test_samples/Presentations_sample.csv";
    mw.loadFileUnspecifiedType(filePath);
    QVERIFY(flag && !mw.presPath.isEmpty());
    mw.close();
}

// Checks type autodetect for Funding
void InputValidityTest::checkDetectsFund() {
    MainWindow mw;
    bool flag = mw.fundPath.isEmpty();
    QStringList filePath;
    filePath << "../src/tests/test_samples/GrantsClinicalFunding_sample.csv";
    mw.loadFileUnspecifiedType(filePath);
    QVERIFY(flag && !mw.fundPath.isEmpty());
    mw.close();
}

// Checks if missing one mandatory cell launches edit dialog

// This test is not working properly right now. Commented.

/*
void InputValidityTest::checkDetectsMissingMandatoryCells() {
    MainWindow mw;
    bool flag = (mw.diag == NULL);
    QStringList filePath;
    filePath << "../src/tests/test_samples/tiny_Grants_sample.csv";
    mw.loadFileUnspecifiedType(filePath);
    QVERIFY(flag && (mw.diag != NULL));
    mw.close();
}*/
