#include<iostream>
using namespace std;

class Bike{
    public:
    int tyreSize;
    void show(){
        cout<<"Bike ka show!"<<endl;
    }
};
class Vehicle{
    //derived class child 
    public:
    int handleSize;
    void show(){
        cout<<"Bike ka show!"<<endl;
    }

class C : public Bike{
    public:
    void show(){
        cout<<" c    ka show!!"<<endl;
    }

};


int main(){
    //compiler POV Vehicle type ka hai!
    //runtime POV Bike ka show hai!
    
    // Bike b;
    // Vehicle *a;
    
    // Vehicle = &b;

    // a->show();
    // Bike *b;
    // b = new Vehicle;
    // b->show();


    Vehicle*a;
    a = new Bike;
    a->show();
    a = new Vehicle;
    a->show();

    Bike *b;
    b = new C;
    b->show(); 
}