#include <iostream>
#include <string>
#include <chrono>
#include "getFile.h"
#include "csvParser.h"
#include "dataProcessing.h"
#include "dataStruct.h"
#include "xmlParser.h"

using namespace std;
using namespace std::chrono;

int main() {
    getFile file;
    csvParser csvParser;
    dataProcessing dp;
    dataStruct ds;
    xmlParser xmlParser;
    while (true) {
        file.getUserPath();
        cout << "Путь " << file.getPath() << endl;
        auto start = high_resolution_clock::now();
        if (file.getExtansion() == "csv") {
            csvParser.parseCSV(file.getPath(), ds);
        }
        else {
            xmlParser.parseXML(file.getPath(), ds);
        }
        dp.processing(ds.getData());
        dp.printCityInfo();
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<milliseconds>(stop - start);
        cout << "Время выполнения программы: " << duration.count() << " мс" << endl;

        dp.clearData();
        ds.clearData();
    }

}
