#include <bits/stdc++.h>
using namespace std;

class ParkingFloor{
     private:
        vector<vector<string>> floorStructure;
        int totalSpots,totalEntryGates,totalExitGates;
    public:
    ParkingFloor(int s,int en, int ex){
        totalSpots=s;
        totalEntryGates=en;
        totalExitGates=ex;
    }
    int getTotalSpots(){
        return totalSpots;
    }
    int getTotalEntryGates(){
        return totalEntryGates;
    }
    int getTotalExitGates(){
        return totalExitGates;
    }
};