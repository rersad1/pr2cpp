#include <iostream>
#include <unordered_map>
#include "csv.h"
#include "dataStruct.h"

using namespace std;
class csvParser {
    private:
    unordered_map<string, vector<string>> data;
    public:
    dataStruct ds;
    void parseCSV(string path);
};   
