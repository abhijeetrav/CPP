#include<iostream>
using namespace std;
void add(int a,int b){
    cout<<a+b<<endl;
}
void add(int a){
    cout<<10+a<<endl;
}
int main(){
    add(a:1 , b:2);
    add(a:5,b=5.2);
}
