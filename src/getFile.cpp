#include <iostream>
#include <string>
#include "getFile.h"
#include <algorithm>
#include <filesystem>
using namespace std;

void getFile::getUserPath() { // ввод пути до файла
    cout << "Введите путь до файла или нажмите Ctrl + C для завершения: ";
    cin >> path;
    if (!filesystem::exists(path)) { // проверка на существование файла
        cout << "Файл не найден. Попробуйте еще раз." << endl;
        getUserPath(); // повторный ввод пути
    }
    getFileExtansion(path);
}

void getFile::getFileExtansion(const string& path) { // получение расширения файла
    int dot = path.find_last_of(".");
    extansion = path.substr(dot + 1);
    transform(extansion.begin(), extansion.end(), extansion.begin(), ::tolower); // перевод расширения в нижний регистр
    if (extansion != "csv" && extansion != "xml") {  // проверка на поддерживаемые расширения
        cout << "Неверное расширение файла. Поддерживаются только файлы с расширением csv и xml." << endl;
        getUserPath(); // повторный ввод пути
    }
    
}

string getFile::getPath() { // геттер для пути
    return path;
}

string getFile::getExtansion() { // геттер для расширения
    return extansion;
}