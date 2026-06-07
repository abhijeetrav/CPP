#include<iostream>
using namespace std;
class Bike{
public:
    int tyreSize;
    int engineSize;
    
    Bike(int tS,int eS):tyreSize(tS),engineSize(eS){}
    Bike(int tS):tyreSize(tS),engineSize(100){}
    Bike():tyreSize(12),engineSize(500){}
};

void calculatorArea(int l,int b){
    cout<<l*b<<endl;
}
void calculatorArea(int s){
    cout<<s*s<<endl;
}
void calculatorArea(float s){
    cout<<s*s<<endl;
}
void calculatorArea(float s){
    cout<<3.14*s*s<<endl;
}
int main(){

}
