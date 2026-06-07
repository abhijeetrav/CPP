#include<iostream>
using namespace std;
class Vehicle{
public:
    int handleSize;
    void show(){
        cout<<"Bike ka show!"<<endl;
};

class Bike : public Vehicle{ //derived class child  class
    public:
    int tyreSize;
    int engineSize;
    void show(){
        cout<<"Bike ka show!"<<endl;
    };

// class C : public Bike{    //derived class child  class

//     public:
//     void show(){
//         cout<<" c    ka show!!"<<endl;
//     }

};
int main(){
    Vehicle a;
    Bike b;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(b)<<endl;
 
}