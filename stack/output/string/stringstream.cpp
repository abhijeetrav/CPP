#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str = "Raghav is s maths teacher.He is milliniore.";
    stringstream ss(str);
    string temp;
    vector<string> v;
    while(ss>>temp){
        v.push_back(temp);
    }
    //Vector printting ------>>>>
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
        }
    cout<<endl;
    sort(v.begin(),v.end());
    //Vector print ----->>>
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    }
