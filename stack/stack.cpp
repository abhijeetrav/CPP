#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st)
    cout<<st.top()<<endl;
    stack<int>gt;
    stack<int>rt;
    
    while(st.size()>0){
        gt.push(st.top());
        st.pop();
    }
   
    while(gt.size()>0){
        rt.push(gt.top());
        gt.pop();

    }
    while(rt.size()>0){
        st.push(rt.top());
        rt.pop();
    }
    cout<<endl;
    // cint(st);


    //we will use extra stack
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    //putting elements back from temp to st
    while(temp.size()>0){
        cout<<temp.top();
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl<<st.top();
    
    
}