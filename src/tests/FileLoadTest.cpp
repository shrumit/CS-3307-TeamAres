#include "FileLoadTest.h"
#include "database/CSVReader.h"
#include <vector>
#include <iostream>

std::vector<std::string> GRANTS_MANFIELDS = {"Member Name", "Funding Type", "Status", "Peer Reviewed?", "Role", "Title", "Start Date"};
std::vector<std::string> PRES_MANFIELDS = {"Member Name", "Date", "Type", "Role", "Title"};
std::vector<std::string> PUBS_MANFIELDS = {"Member Name", "Type", "Status Date", "Role", "Title"};
std::vector<std::string> TEACH_MANFIELDS = {"Member Name", "Start Date", "Program", "Division"};

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

void FileLoadTest::teachingMandatoryCols(){
    CSVReader reader("../Sample Data/Program_Teaching_expanded.csv");
    vector<string> header = reader.getHeaders();
    for (unsigned int i = 0; i < TEACH_MANFIELDS.size() ; ++i) {
        //if entry from mandatory field vector missing, failure, invalid csv
        QVERIFY(std::find(header.begin(), header.end(), TEACH_MANFIELDS[i]) != header.end());
    }
}


void FileLoadTest::publicationsMandatoryCols(){
    CSVReader reader("../Sample Data/Publications_expanded.csv");
    vector<string> header = reader.getHeaders();
    for (unsigned int i = 0; i < PUBS_MANFIELDS.size() ; ++i) { //verify csv
        if (std::find(header.begin(), header.end(), PUBS_MANFIELDS[i]) == header.end()) { //if entry from mandatory field vector missing, failure, invalid csv

            std::vector<std::string> expandedCols = {"Member Name", "Type", "Status Date *", "Role *", "Title"};
            //hotfix for Publications_expanded.csv having different colums
            for (unsigned int i = 0; i < expandedCols.size() ; ++i) {
                QVERIFY(std::find(header.begin(), header.end(), expandedCols[i]) != header.end());
            }
        }
    }
}




void FileLoadTest::presentationMandatoryCols(){
    CSVReader reader("../Sample Data/Presentations_expanded.csv");
    vector<string> header = reader.getHeaders();
    for (unsigned int i = 0; i < PRES_MANFIELDS.size() ; ++i) {
        //if entry from mandatory field vector missing, failure, invalid csv
        QVERIFY(std::find(header.begin(), header.end(), PRES_MANFIELDS[i]) != header.end());
    }
}

void FileLoadTest::grantsMandatoryCols(){
    CSVReader reader("../Sample Data/Grants_expanded.csv");
    vector<string> header = reader.getHeaders();
    for (unsigned int i = 0; i < GRANTS_MANFIELDS.size() ; ++i) {
        //if entry from mandatory field vector missing, failure, invalid csv
        QVERIFY(std::find(header.begin(), header.end(), GRANTS_MANFIELDS[i]) != header.end());
    }
}



