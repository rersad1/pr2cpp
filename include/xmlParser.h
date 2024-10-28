#ifndef XMLPARSER_H
#define XMLPARSER_H

#include <string>
#include "dataStruct.h"
#include "rapidxml.hpp"
#include "rapidxml_utils.hpp"

class xmlParser {
    public:
    void parseXML(const std::string& path, dataStruct& ds);
};

#endif // XMLPARSER_H