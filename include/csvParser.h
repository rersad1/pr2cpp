#ifndef CVSPARSER_H
#define CVSPARSER_H

#include <unordered_map>
#include "dataStruct.h"
#include "csv.h"

class csvParser {
public:
    void parseCSV(const std::string& path, dataStruct& ds); // добавлен параметр dataStruct& ds
};   

#endif // CVSPARSER_H
