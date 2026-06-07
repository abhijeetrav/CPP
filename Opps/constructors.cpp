#include<iostream>
using namespace std;
class Bike{
public:
    int typesize;
    //default constructor
    Bike(){
        cout<<"~hi ! it is sign of calling on constructor!"<<endl;

    }
};
int main(){
    Bike tvs;// object creation //constructor ko call jayegi
    Bike honda;
    Bike hero;
}

