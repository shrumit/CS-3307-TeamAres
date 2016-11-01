#include "FileLoadTest.h"
#include "database/CSVReader.h"
#include <vector>
#include <iostream>

using namespace std;

void FileLoadTest::loadNoFile(){
    CSVReader reader("empty");
    vector<string> header = reader.getHeaders();
    bool test = false;
    if (header.empty()){
        test = true;
    }
    QVERIFY(test);
}

void FileLoadTest::loadGrants(){
    CSVReader reader("../Sample Data/Grants_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void FileLoadTest::loadPublications(){
    CSVReader reader("../Sample Data/Publications_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void FileLoadTest::loadPresentations(){
    CSVReader reader("../Sample Data/Presentations_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}

void FileLoadTest::loadTeaching(){
    CSVReader reader("../Sample Data/Program_Teaching_expanded.csv");
    vector<string> header = reader.getHeaders();
    QVERIFY(header.size() != 0);
}
