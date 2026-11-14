#include<iostream>
#include<stack>
using namespace std;
bool isBalanced(string s){
    if(s.length()%2!=0) return true;
    
}
int main(){
    string s="(()())";
    cout<<isBalanced(s);
}