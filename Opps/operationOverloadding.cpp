#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int imaginary;
    int real;
};

int main(){
    ComplexNumber a1,a2;
    a1.imaginary = 10;
    a2.imaginary = 20;
    a1.real = 10;
    a2.real = 20;

        ComplexNumber a3;
        a3.imaginary=a1.imaginary + a2.imaginary;
        a3.real=a1.real + a2.real;
            cout<<a3.imaginary<<endl;
            cout<<a3.real<<endl;
}