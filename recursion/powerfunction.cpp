#include<iostream>
using namespace std;
int pow(int x,int n){
        if(n==1) return x;
        if(n==0) return 1;
        if(n%2==0) return pow(x,n/2)*pow(x,n/2);
        if(n%2!=0) return pow(x,n/2)*pow(x,n/2)*x;
        cout<<pow<<endl;
    }
int main(){
    int x;
    int n;
    cout<<pow(3,1);
}