#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <unordered_map>
#include <string>
using namespace std;

class dataStruct {
public:
    // Структура для хранения информации о зданиях
    struct buildingInfo {
        int floors;
        int repeatCount;
        string city;
    };
    void addData(const string& city, const string& street, const string& house, const string& floor); 
private:
    unordered_map<string, buildingInfo> data;    // карта для хранения данных по адресу
    
    // метод для добавления данных
    const unordered_map<string, buildingInfo>& getData() const; // геттер для получения данных
};

#endif // DATASTRUCT_H
