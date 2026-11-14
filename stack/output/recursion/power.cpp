#include<iostream>
using namespace std;
int power(int a,int b){
    int p=1;
    for(int i=0;i<=b;i++){
        p=p*a;
    }
    return p;

}
int pow(int a,int b){
    if(b==0) return 1;
    if(a==0 && b==0) 
    cout<<"not defined"<<endl;
    return a*pow(a,b-1);
}
int main(){
    int a;
    cout<<"Enter the base number:"<<endl;
    cin>>a;
    int b;
    cout<<"Enter the power number:"<<endl;
    cin>>b;
    cout<<a<<"is raised to the power  is ="<<b<<"is ="<< pow(a,b);
    
 
}