#ifndef TEST_H
#define TEST_H

#include <QtTest/QtTest>

class FileLoadTest: public QObject
{
    Q_OBJECT

private slots:
    //write test functions here
    void loadNoFile();
    void loadGrants();
    void loadPublications();
    void loadPresentations();
    void loadTeaching();
};


#endif // TEST_H
