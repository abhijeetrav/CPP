#include<iostream>
#include<string>

using namespace std;
void removeChar(string ans,string original,int idx){
    if(idx == original.length()){
        cout<<ans;
        return;
    }
    char ch = original[0];
    if(ch=='p') removeChar(ans,original.substr(1),idx+1);
    else removeChar(ans+ch,original.substr(1),idx+1);

}
int main(){
    string str = "physicswallah";
    removeChar("",str,0);
}
