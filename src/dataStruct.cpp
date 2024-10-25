#include <unordered_map>
#include "dataStruct.h"
#include <iostream>
using namespace std;

void dataStruct::addData(const string& city, const string& street, const string& house, const string& floor) { // добавление данных в мапу
    string address = city + " " + street + " " + house; // формируем адрес
    if (data.find(address) == data.end()) { // если адреса нет в мапе, то добавляем его
        buildingInfo info;
        info.floors = stoi(floor);
        info.repeatCount = 0;   
        info.city = city;
        data[address] = info;
    } 
    else { // если адрес есть в мапе, то увеличиваем счетчик повторений
        data[address].repeatCount++;
    }
}

const unordered_map<string, dataStruct::buildingInfo>& dataStruct::getData() const { // геттер для карты данных
    return data;
}

void dataStruct::printData() { // вывод данных
    cout << "Данные из файла: " << endl;
    for (const auto& entry : data) {
        cout << "Адрес: " << entry.second.city << " " << entry.first << " " << entry.second.repeatCount << endl;
    }
}
