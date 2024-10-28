#include <unordered_map>
#include "dataStruct.h"
#include <iostream>
using namespace std;

void dataStruct::addData(const string& city, const string& street, const string& house, const string& floor) {
    string address = city + " " + street + " " + house;
    if (data.find(address) == data.end()) {
        buildingInfo info;
        info.floors = stoi(floor);
        info.repeatCount = 0;
        info.city = city;
        data[address] = info;
    }
    else {
        data[address].repeatCount++;
    }
}

const unordered_map<string, dataStruct::buildingInfo>& dataStruct::getData() const {
    return data;
}

/*void dataStruct::printData() const {
    cout << "Данные из файла: " << endl;
    for (const auto& entry : data) {
        cout << "Адрес: " << entry.second.city << " " << entry.first << " " << entry.second.repeatCount << "\n";
    }
} */
