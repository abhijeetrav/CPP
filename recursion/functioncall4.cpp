#include<iostream>
using namespace std;
void greet(){
    cout<<"hi friend!"<<endl;
    cout<<"what are you doing man"<<endl;
}
void fun(){
    cout<<"hi friend!"<<endl;
    cout<<"what are you doing man"<<endl;
    greet();
    return;
} 
int main(){
    fun();

}