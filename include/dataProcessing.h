#ifndef DATAPROCESSING_H
#define DATAPROCESSING_H

#include <iostream>
#include <map>
#include <unordered_map>
#include "dataStruct.h" 

class dataProcessing {
private:
    struct floorsCount { // структура для использовании в качестве значения в std::map
        int oneFloor = 0;
        int twoFloors = 0;
        int threeFloors = 0;
        int fourFloors = 0;
        int fiveFloors = 0;
    };
    
    std::map<std::string, floorsCount> cityFloorsInfo; // для хранения информации о количестве этажей в каждом городе в алфавитном порядке

public:
    dataStruct ds;
    void processing(const std::unordered_map<std::string, dataStruct::buildingInfo>& data); // вывод повторяющихся элементов и подсчет количества этажей в каждом городе
    void printCityInfo(); // вывод информации о количестве этажей в каждом городе
};

#endif // DATAPROCESSING_H