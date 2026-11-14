#include<iostream>
#include<string>
#include<vector>
using namespace std;
void pemutation(vector<string> v,string  ans,string original);
    if(s==""){
        v.push_back(0);
        return;
    
    for(int i=0;i<s.length();i++){
        char ch=s.[i];
        string left= s.substr(0,i);
        string right= s.substr(i+1);
        permutation(v,ans+ch,left+right)
    }
    

