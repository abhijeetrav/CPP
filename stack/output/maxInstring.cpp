#include<iostream>
#include<string>
using namespace std;
int main(){
    string arr[]={"123","342","7655","00011"};
    int max = stoi(arr[0]);
    string maxS = arr[0];
    for(int i=1;i<=5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max = x;
            maxS =arr[i];
        }
    }
    cout<<maxS;
}

