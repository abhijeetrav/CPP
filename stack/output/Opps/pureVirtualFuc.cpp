#include<iostream>
using namespace std;
class Vehicle{v    // Base Class ,Parent Class
public:
    int tyreSize;
    int engineSize;
    virtual void calculaterMileage() = 0;
    virtual void refuel() = 0;
};

class Bike : public Vehicle{  
    //Derived class ,Child class
public:
    int handleSize;
    void calculaterMileage(){
        cout<<"Bike ka show!!"<<endl;
    }
    void refuel(){
        cout<<"Refuel"<<endl;
    }
};
int main(){
    //  Vehicle v;
     v.calculaterMileage();
    // Bike b;
    // cout<<sizeof(a)<<endl;
    // cout<<sizeof(b)<<endl;


}