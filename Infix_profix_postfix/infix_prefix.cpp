#include<iostream>
#include<stack>
using namespace std;
int prio(char ch){
    if(ch=='+' || ch =='-') return 1;
    else return 2;
}
string solve(string val2,string val1,char ch){
    string s="";
    s.push_back=ch;
    s+=val2;
    s+=val1;
    return s;
}
int main(){
    string s="2+6*4/8-3";
    stack<string>val;
    stack<char>op;
    for(int i=0;i<s.length();i++){
        if (s[i] >= 48 && s[i] <= 57){
            val.push(to_string(s[i] - 48));//digit 
        }
        else{
            if(op.size()==0) op.push(s[i]);
            else if(s[i]=='(') op.push(s[i]);
            else if(op.top()=='(') op.push(s[i]);
            else if(s[i]==')'){
                while(op.top()!='('){
                    char ch=op.top();
                    op.pop();
                    int val1 =val.top();
                    val.pop();
                    int val2=val.top();
                    val.pop();
                    int ans=(int val2,int val1,ch);

                }
                return ans;
            }
        }
    }
}
cout<<val.top()<<endl;
}