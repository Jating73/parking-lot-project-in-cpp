#include <bits/stdc++.h>
using namespace std;

class ParkingLotStructure{
    private:
        int n=5;
        string floorStructure[5][5];
    public:
        //Default Constructor
        ParkingLotStructure(){
            //Initializing all with rows and cols with slots
            for(auto i=0;i<n;i++){
                for(auto j=0;j<n;j++){
                    floorStructure[i][j]="Slot";
                }
            }

            floorStructure[0][0]="Not";
            floorStructure[0][n-1]="Not";
            floorStructure[n-1][0]="Not";
            floorStructure[n-1][n-1]="Not";

            floorStructure[n/2][n/2]="Lift";


            for(auto i=(n/2)-1;i<(n/2)+1;i++){
                for(auto j=(n/2)-1;j<(n/2)+1;j++){

                    if(floorStructure[i][j]=="Lift"){
                        continue;
                    }else{
                        floorStructure[i][j]="Lane";
                    }
                }
            }
        }
            
        //Parameterized Constructor
        ParkingLotStructure(int n){
            //Initializing all with rows and cols with slots
            for(auto i=0;i<n;i++){
                for(auto j=0;j<n;j++){
                    floorStructure[i][j]="Slot";
                }
            }

            floorStructure[0][0]="Not";
            floorStructure[0][n-1]="Not";
            floorStructure[n-1][0]="Not";
            floorStructure[n-1][n-1]="Not";

            floorStructure[n/2][n/2]="Lift";

            for(auto i=(n/2)-1;i<(n/2)+1;i++){
                for(auto j=(n/2)-1;j<(n/2)+1;j++){

                    if(floorStructure[i][j]=="Lift"){
                        continue;
                    }else{
                        floorStructure[i][j]="Lane";
                    }
                }
            }
        }   
};