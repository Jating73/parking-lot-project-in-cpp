#include<bits/stdc++.h>
using namespace std;

class Address{
    string city;
    string state;
    string pincode;
public:
    Address(string c,string s,string p){
        city=c;
        state=s;
        pincode=p;
    }
    string getCity(){
        return city;
    }
    string getState(){
        return state;
    }
    string getPincode(){
        return pincode;
    }

};
