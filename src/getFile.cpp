#include <iostream>
#include <string>
#include "getFile.h"
#include <algorithm>
using namespace std;

void getFile::getUserPath() { // ввод пути до файла
    cout << "Введите путь до файла или нажмите Ctrl + C для завершения: ";
    cin >> path;
}

void getFile::getFileExtansion(string path) { // получение расширения файла
    int dot = path.find_last_of(".");
    extansion = path.substr(dot + 1);
    transform(extansion.begin(), extansion.end(), extansion.begin(), ::tolower); // перевод расширения в нижний регистр
    if (extansion != "csv" && extansion != "xml") {  // проверка на поддерживаемые расширения
        cout << "Неверное расширение файла. Поддерживаются только файлы с расширением csv и xml" << endl;
        getUserPath(); // повторный ввод пути
    }
    
}

string getFile::getPath() { // геттер для пути
    return path;
}

string getFile::getExtansion() { // геттер для расширения
    return extansion;
}