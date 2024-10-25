#include <iostream>
#include "getFile.h"
#include "cvsParser.h"
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
    parser.parseCSV(file.getPath());
    dp.processing(ds.getData());
    dp.printCityInfo();
}