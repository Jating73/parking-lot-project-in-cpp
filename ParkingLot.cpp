#include<bits/stdc++.h>
#include"ParkingFloor.h"
#include"Address.h"
using namespace std;

class ParkingLot{
    private:
        int totalSpots,totalEntryGates,totalExitGates;
        map<int,ParkingFloor> floors;
        map<int,ParkingFloor>::iterator itr;
     public:
        ParkingLot(int totalfloors){
            for(auto i=0;i<totalfloors;i++){
                cout<<"\nEnter total spots,entryGates,exitGates in integer"<<endl;
                cin>>totalSpots>>totalEntryGates>>totalExitGates;
                floors.insert(make_pair(i+1,ParkingFloor(totalSpots,totalEntryGates,totalExitGates)));
            }
        }
         void show(){
            for(auto itr=floors.begin();itr!=floors.end();itr++){
                cout<<itr->first<<" "<<itr->second.getTotalSpots()<<" "<<itr->second.getTotalEntryGates()<<" "<<itr->second.getTotalExitGates()<<endl;
            }

        }    
};

int main()
{
    //Creating Different Parking Lot with their Addresses
    int n;
    map<int,Address> ParkingLotmap;
    string city,state,pin;

    cout<<"Enter no of Parking Lots"<<endl;
    cin>>n;
    for(auto i=0;i<n;i++){
        cout<<"\nEnter state,city,pincode in string"<<endl;
        cin>>city>>state>>pin;
        ParkingLotmap.insert(make_pair(i+1,Address(city,state,pin)));
    }

    map<int,Address>::iterator itr;
    for(auto itr=ParkingLotmap.begin();itr!=ParkingLotmap.end();itr++){
        cout<<itr->first<<" "<<itr->second.getCity()<<" "<<itr->second.getState()<<" "<<itr->second.getPincode()<<endl;
    }


    //Creating Different floors with number of slots, entrygates, exitgates in them
    int totalfloors;
    cout<<"\nEnter total no of Parking floors"<<endl;
    cin>>totalfloors;
    ParkingLot *p = new ParkingLot(totalfloors);

    p->show();
    return 0;
}
