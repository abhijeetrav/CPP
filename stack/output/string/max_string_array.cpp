#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
#include<sstream>
#include<cmath>
using namespace std;
int main(){
    string arr[]={"0123456789","1234567890","0123456789","1234567890"};
    int max=stoi(arr[0]);
    int maxS=arr[0];
    for(int i=1;i<=5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxS=arr[i];
    }
}
    cout<<max;

};