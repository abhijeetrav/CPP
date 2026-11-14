#include<iostream>
void hanoi(int n,char a,char b,char c){      //  here is fuction-calling
    if(n==0) return;
    hanoi(n-1,a,c,b);
    cout<<a<<"-->"<<c<<endl;
    hanoi(n-1,b,a,c);

    }

using namespace std;
int main(){
    int n= 3 ;//here is inputing 
    hanoi(n,'A','B','C');
    return;

}


