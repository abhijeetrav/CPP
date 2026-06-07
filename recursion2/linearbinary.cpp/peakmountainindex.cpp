#include<iostream>
using namespace std;
int main(){
    int arr[]={0,3,5,4,3,2,0};
    int peakvalue;
    int lo=0;
    int mid;
    int n=sizeof(arr)/sizeof(0);
    int hi=n-1;
    for(int i=0;i<=n;i++){
        mid=(lo+hi)/2;
        if(arr[mid]==peakvalue){
            cout<<mid<<endl;
        }
        else if(arr[mid]<peakvalue){
            hi=mid+1;
            cout<<mid<<endl;
        }
        else if(arr[mid]>peakvalue){
            lo=mid-1;
        }
        else{
            return -1;
        }
    }
}