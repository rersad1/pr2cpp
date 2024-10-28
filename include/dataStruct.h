#ifndef DATASTRUCT_H
#define DATASTRUCT_H

#include <string>
#include <unordered_map>

class dataStruct {
public:
    struct buildingInfo { // структура для хранения информации о этажах и количестве повторений адресов
        int floors;
        int repeatCount;
        std::string city;
    };
    buildingInfo info;
    void addData(const std::string& city, const std::string& street, const std::string& house, const std::string& floor); // добавление данных в мапу
    const std::unordered_map<std::string, buildingInfo>& getData() const; // геттер для мапы
    void printKeysAndValues() const;
    void printData() const; // вывод данных

private:
    std::unordered_map<std::string, buildingInfo> data; // мапа для хранения данных
};

#endif // DATASTRUCT_H