#include "xmlParser.h"
#include <iostream>
#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
using namespace rapidxml;

void xmlParser::parseXML(const string& filePath, dataStruct& ds) {
    ifstream file(filePath);
    if (!file.is_open()) {
        cerr << "Не удалось открыть файл: " << filePath << endl;
        return;
    }

    stringstream buffer;
    buffer << file.rdbuf();
    string content(buffer.str());
    file.close();

    xml_document<> doc;
    try {
        doc.parse<0>(&content[0]);
    }
    catch (const parse_error& e) {
        cerr << "Ошибка парсинга XML: " << e.what() << endl;
        return;
    }

    xml_node<>* root = doc.first_node("root");
    if (!root) {
        cerr << "Не найден корневой элемент <root>" << endl;
        return;
    }

    for (xml_node<>* node = root->first_node("entry"); node; node = node->next_sibling()) {
        string city = node->first_attribute("city")->value();
        string street = node->first_attribute("street")->value();
        string house = node->first_attribute("house")->value();
        string floor = node->first_attribute("floor")->value();
        ds.addData(city, street, house, floor);
    }
}