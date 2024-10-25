#ifndef CVSPARSER_H
#define CVSPARSER_H

#include <unordered_map>
#include "dataStruct.h"
#include "csv.h"

class csvParser {
    public:
    dataStruct ds;
    void parseCSV(std::string path);
};   

#endif // CVSPARSER_H
