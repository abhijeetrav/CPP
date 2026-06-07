#include<iostream>
#include<stack>
using namespace std;
class Bike{
public:
    static int  noOfBikes;  //this belogs to the class 
    int tyreSize;
    int engineSize;

    Bike(int tyrteSize,int engineSize ){
        this->tyreSize;
        this->engineSize;
    }
     void setNoBikes(int noOfBikes){
        noOfBikes = no;
        noOfBikes++;
     }
     static void increaseNoOfBikes(){
        noOfBikes++;
     }
};
int Bike::noOfBikes=10;
int main(){
    Bike royalEnfield(tyreSize:15,engineSize:100);
    Bike bajaj(tyreSize:25);
    Bike royalEnfield(no:1);

    cout<<royalEnfield.tyreSize<<" "<<royalEnfield.engineSize<<endl;
    cout<<bajaj.tyreSize<<" "<<bajaj.engineSize<<endl;

}