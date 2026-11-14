#include<iostream>
using namespace std;
void print(){
    static int b = 10;
// here when we are using the static then is is declare the int b = 10 only one time and b++ increase the b's value
    cout<<b<<endl;
    b++;
}
int main(){
    print();
    print();
    print();

}