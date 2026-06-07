#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int imaginary;
    int real;
    ComplexNumber add(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary+this->imaginary;
        c3.real = c1.real+this->real;
        return c3;
    }


    ComplexNumber operator+(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary+this->imaginary;
        c3.real = c1.real+this->real;
        return c3;
    }


    ComplexNumber operator -(ComplexNumber &c1){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real-this->real;
        return c3;
    }


};

int main(){
    ComplexNumber a1,a2;
    a1.imaginary = 10;
    a2.imaginary = 20;
    a1.real = 30;
    a2.real = 40;

        ComplexNumber a3 = a1+a2;
        ComplexNumber a4 = a1-a2;
        
               // a3.imaginary=a1.imaginary + a2.imaginary;
        // a3.real=a1.real + a2.real;
        cout<<a3.imaginary<<endl;
        cout<<a3.real<<endl;

         cout<<a4.imaginary<<endl;
        cout<<a4.real<<endl;
}