#include<iostream>
using namespace std;
int  main(){
        int arr[]={1,4,5,5,5,5,6,7,8,14,15,24};
        int n=9;
        int x=5;
        int lo=0;
        int hi = n-1;
    bool flag = false;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
                if(arr[mid]==x){
                    flag = true;
                    cout<<arr[mid-1];
                    break;
                }
                    else if(arr[mid]<x){
                        lo = mid+1;
                    }
                else hi = mid-1;
            }
        if(flag==false) 
            cout<<arr[lo];

}