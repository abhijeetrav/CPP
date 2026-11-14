#include<iostream>
#include<stack>
#include<array>
using namespace std;
int main(){
    stack<int>st;
    int arr[];
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;
    int n=sizeof(arr)/sizeof(arr[0]);
    int nge[];
    int i;
    nge[n-1]=-1;
    st.push(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        while(st.size()>0 && st.top()<=arr[i]){
            st.pop();
        }
        //mark the ans in nge array
        if(st.size()==0) nge[i]=-1;
        else nge[i]=st.top();
        //push the arr[i]
        st.push(arr[i]);
    }
    for(int i=0;i<n;i++){
        cout<<nge[i]<<"";
    }
    cout<<endl;

}