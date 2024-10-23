#include <iostream>
#include <unordered_map>
#include "csv.h"
#include "dataStruct.h"
#include "cvsParser.h"

using namespace std;


void csvParser::parseCSV(string path) {
        io::CSVReader<4> in(path);
        in.read_header(io::ignore_extra_column, "city", "street", "house", "floor");
        string city, street, house, floor;
        while (in.read_row(city, street, house, floor)) {
            ds.addData(city, street, house, floor);
        }
    }
