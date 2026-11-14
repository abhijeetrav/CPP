#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    //default constructor
Bike(int typesize, int engineSize){  // if i am here declare the engineSize=340 then in condition of not enter the value in any Bike like tvs then it is takes the the default value of engineSize=340
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
        cout<<"~hi ! it is sign of calling on constructor!"<<endl;

    }
~Bike(){ //tilde '~'
    cout<<"~destructor call hua!!"<<endl;

}
};
int main(){
    Bike tvs(25,200);// object creation //constructor ko call jayegi
    Bike honda(34,250);
    Bike hero(45,350);
    bool flag = true;
    if(flag==true){
        // int tqr = 10;
        Bike bwm(tyreSize:17,engineSine:1000);
        cout<<bwm.tyreSize<<" "<<bmw.engineSize<<endl;
        cout<<pqr<<endl;
    }
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<"  "<<honda.engineSize<<endl;
    cout<<hero.tyreSize<<"  "<<hero.engineSize<<endl;

}