#include<iostream>
using namespace std;
int main(){
    int arr[]={12,13,15,7,3,19,16,17,19,24,23};
    int low=0;
    int high = sizeof(arr) / sizeof(arr[0]) - 1;
    int mid;

    cout<<"enter the number"<<endl;
    int target=18;
        if(mid==target){
            mid=(low+high)/2;
            return true;
            }

        if(arr[mid]>target){
            low=mid-1;
            cout<<mid<<endl;
            }

        else if(arr[mid]<target){
            high=mid-1;
            cout<<mid<<endl;
    }
}
    