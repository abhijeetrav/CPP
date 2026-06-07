/*#include<iostream>
#include<string>
using namespace std;
int main(){
    string s = "abcdef";
    cout<<s.substr(1,1);
}*/

#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<str<<" ";
    cin>>str; 
    
    int n=str.length();
    cout<<str.substr(n/2);
    cout<<n<<"";
}