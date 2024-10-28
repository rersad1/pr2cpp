#include <iostream>
#include <unordered_map>
#include <map>
#include "dataProcessing.h"
using namespace std;

void dataProcessing::processing(const unordered_map<string, dataStruct::buildingInfo>& data) {
    for (const auto& entry : data) {
        if (entry.second.repeatCount > 1) { // если адрес повторяется более одного раза выводим его и количество повторений
            cout << "Адрес: " << entry.first << " повторяется " << entry.second.repeatCount << " раз(a)" << endl;
        }
        switch (entry.second.floors) { // считаем количество этажей в каждом городе
            case 1:
                cityFloorsInfo[entry.second.city].oneFloor++;
                break;
            case 2:
                cityFloorsInfo[entry.second.city].twoFloors++;
                break;
            case 3: 
                cityFloorsInfo[entry.second.city].threeFloors++;
                break;
            case 4:
                cityFloorsInfo[entry.second.city].fourFloors++;
                break;
            case 5:
                cityFloorsInfo[entry.second.city].fiveFloors++;
                break;                
        }
    }
}

void dataProcessing::printCityInfo() { // вывод информации о количестве этажей в каждом городе в алфавитном порядке
    for (const auto& entry : cityFloorsInfo) {
        cout << "Город: " << entry.first << "\n";
        cout << "Одноэтажные: " << entry.second.oneFloor << "\n";
        cout << "Двухэтажные: " << entry.second.twoFloors << "\n";
        cout << "Трехэтажные: " << entry.second.threeFloors << "\n";
        cout << "Четырехэтажные: " << entry.second.fourFloors << "\n";
        cout << "Пятиэтажные: " << entry.second.fiveFloors << "\n";
    }
}