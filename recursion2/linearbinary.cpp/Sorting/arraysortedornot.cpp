#include<iostream>
using namespace std;
int main(){
    int arr[]={1,6,5,4,3,2};
    int n=6;
  
    for(int i=0;i<n;i++){
        bool flag = true;
        for(int j=0;j<n-1-i-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag=false;
            }
         
        }
        if(flag==true){
            break;
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
    }

  