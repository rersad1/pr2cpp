#include <iostream>
#include <unordered_map>
#include <map>
#include "dataStruct.h"
using namespace std;

class dataProcessing {
    private:
    struct floorsCount {
        int oneFloor = 0;
        int twoFloors = 0;
        int threeFloors = 0;
        int fourFloors = 0;
        int fiveFloors = 0;
    };
    map<string, floorsCount> cityFloorsInfo;
    public:
    dataStruct ds;
    void processing(const unordered_map<string, dataStruct::buildingInfo>& data);
    void printCityInfo();
};