#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
  vector<int> v(150,1000);
    string s={"flower","flow","flight"};
    string t={"flight","flow","flower"};
    if(s.begin()==t.end()) ;
        //vector<int> v(150,1000);
        for(int i=0;i<s.length();i++){
            int idx=(int)s[i];
           //v[i]=1000;//
            if(v[idx]==1000) v[idx]=s[i]-t[i];
            else if(v[idx]!=s[i]-t[i]) cout<<s<<" "<<t;
        }
         for(int i=0;i<s.size();i++){
            int idx=(int)s[i];
            if(v[idx]==1000) v[idx]=t[i]-s[i];
            else if(v[idx]!=t[i]-s[i]) return false;
        }


        return true;
        
    }
}