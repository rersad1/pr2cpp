#include <iostream>
#include <string>
#include "getFile.h"

using namespace std;

void getFile::getUserPath() { // ввод пути до файла
    cout << "Введите путь до файла или нажмите Ctrl + C для завершения: ";
    cin >> path;
}

void getFile::getFileExtansion(string path) { // получение расширения файла
    int dot = path.find_last_of(".");
    extansion = path.substr(dot + 1);
}

string getFile::getPath() { // геттер для пути
    return path;
}

string getFile::getExtansion() { // геттер для расширения
    return extansion;
}