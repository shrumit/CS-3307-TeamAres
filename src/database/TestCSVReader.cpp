#include "TestCSVReader.h"
#include "CSVReader.h"
#include <vector>
#include <iostream>
using namespace std;

TestCSVReader::TestCSVReader(){

}


bool TestCSVReader::CSV_READER_TEST_01(){
    CSVReader reader("../Project Information/Sample Data/Grants_expanded.csv");
    vector<string> header = reader.getHeaders();
    if(header.size() != 0) return true;
    return false;
}
bool TestCSVReader::CSV_READER_TEST_02(){
    CSVReader reader("../Project Information/Sample Data/GrantsClinicalFunding_sample.csv");
    vector<string> header = reader.getHeaders();
    if(header.size() != 0) return true;
    return false;
}
bool TestCSVReader::CSV_READER_TEST_03(){
    CSVReader reader("../Project Information/Sample Data/Presentations_expanded.csv");
    vector<string> header = reader.getHeaders();
    if(header.size() != 0) return true;
    return false;
}
bool TestCSVReader::CSV_READER_TEST_04(){
    CSVReader reader("../Project Information/Sample Data/Presentations_sample.csv");
    vector<string> header = reader.getHeaders();
    if(header.size() != 0) return true;
    return false;
}
bool TestCSVReader::CSV_READER_TEST_05(){
    CSVReader reader("../Project Information/Sample Data/Program_Teaching_expanded.csv");
    vector<string> header = reader.getHeaders();
    if(header.size() != 0) return true;
    return false;
}
bool TestCSVReader::CSV_READER_TEST_06(){
    CSVReader reader("NO FILE");
    vector<string> header = reader.getHeaders();
    if(header.size() == 0) return true;
    return false;
}

bool TestCSVReader::CSV_READER_TEST_07(){
    CSVReader reader("../Project Information/Sample Data/Presentations_sample.csv");
    vector< vector<string> > all_data = reader.getData();
    if(all_data.size() != 0) return true;
    return false;
}

bool TestCSVReader::CSV_READER_TEST_08(){
    CSVReader reader("../Project Information/Sample Data/Program_Teaching_expanded.csv");
    vector< vector<string> > all_data = reader.getData();
    if(all_data.size() != 0) return true;
    return false;
}

void TestCSVReader::CSV_READER_TEST_ALL(){
    int pass = 0;
    int fail = 0;
    int total = 0;
    pass = CSV_READER_TEST_01();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_02();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_03();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_04();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_05();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_06();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_07();
    if(!pass) fail ++;
    total ++;
    pass = CSV_READER_TEST_08();
    if(!pass) fail ++;
    total ++;

    pass = total - fail;
    cout << "Total Test Case: " << total << " - Pass: " << pass << " - Fail: " << fail << endl;

}
