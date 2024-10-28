#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <string>
#include "dataStruct.h"

class xmlParser {
    public:
    void parseXML(const std::string& path, dataStruct& ds);
};

#endif // XMLPARSER_H