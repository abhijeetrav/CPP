#include<iostream>
#include<string>
using namespace std;
int main(){
    string  s = "ABCDEFRGHIJKLMNOPQRSTUVWXYZ";
    string str = "";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X'){
            str.push_back(s[i]);
        }
    }
    sort(s.begin(),s.end())
    cout<<str;
}