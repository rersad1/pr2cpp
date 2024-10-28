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
    
    // Получение пути к файлу от пользователя
    file.getUserPath();
    cout << "Path: " << file.getPath() << endl;
    
    // Парсинг CSV файла, данные записываются в основной объект ds
    parser.parseCSV(file.getPath(), ds);
    
    // Отладочное сообщение перед вызовом printData
    // cout << "Перед вызовом ds.printData()" << endl;
    // ds.printData();
    
    // Отладочное сообщение перед вызовом processing
    cout << "Перед вызовом dp.processing(ds.getData())" << endl;
    dp.processing(ds.getData());
    
    // Отладочное сообщение перед вызовом printCityInfo
    cout << "Перед вызовом dp.printCityInfo()" << endl;
    dp.printCityInfo();

    // Отладочное сообщение в конце main
    cout << "Конец main()" << endl;
}
