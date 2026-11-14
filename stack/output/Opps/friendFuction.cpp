#include<iostream>
using namespace std;
class ComplexNumber{
public:
    int imaginary;
    int real;

     friend ComplexNumber operator +(ComplexNumber &c1,ComplexNumber &c2){
        ComplexNumber c3;
        c3.imaginary = c1.imaginary+ this->imaginary;
        c3.real = c1.real+ this->real;
        return c3;
    }
       ComplexNumber c3;
        c3.imaginary = c1.imaginary - this->imaginary;
        c3.real = c1.real-this->real;
        return c3;  ComplexNumber operator -(ComplexNumber &c1){
     
    }
};
class A{
    int a_private = 10;
public:
    friend void show(A &a);
    void show2(){
    cout<<a.a_private<<endl;
    };
};
void show(A &a){
        cout<<a.a_private<<endl;    
}
int main(){
    A a;
    show(&:a);
}