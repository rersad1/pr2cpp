#include <iostream>
#include "getFile.h"
#include "csvParser.h"
#include "dataProcessing.h"
#include "dataStruct.h"
#include <string>
using namespace std;

int main() {
    getFile file;
    csvParser parser;
    dataProcessing dp;
    dataStruct ds;
    file.getUserPath();
    cout << "Path: " << file.getPath() << endl;
    parser.parseCSV(file.getPath());
    ds.printData();
    dp.processing(ds.getData());
    dp.printCityInfo();

}