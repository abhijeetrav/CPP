#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,3,5,2,4,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=4;
    int maxSum=INT_MIN;
    int maxIdx=-1;
    int sum=0;
    for (int i=0;i<k;i++){
        sum=sum+arr[i];
    }
    maxSum=sum;
    //sliding window
    int i=1;
    int j=k;
    while(j<n){
        sum=sum+arr[j]-arr[i-1];
        if(maxSum<sum){
            maxSum=sum;
            maxIdx=i;
        }
        i++;
        j++;

        //TC =O(n) it is the time complexity//
    }
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;
}



//given code is related  to leecode problem no.1052
// class Solution {
//     public:
//         int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
//            int k=minutes;
//            vector<int>&arr = customers;
//            int n=arr.size();
//            int prevLoss=0;
//            for(int i=0;i<maxIdx+k;i++){
//                 if(grumpy[i]==1) prevLoss +=arr[i];
//            } 
//                   int maxLoss=prevLoss;
//                   it maxIdx=0;
//                   int i=1;
//                   int j=k;
//                   while(j<n){
//                     int  currLoss=prevLoss;
//                     if(grumpy[j]==1) currLoss +=arr[j];
//                     if(grumpy[i-1]) currLoss -=arr[i-1];
//                     if(maxLoss<currLoss){
//                         maxLoss=currLoss;
//                         maxIdx=i;
//                     }
//                     prevLoss=currLoss;
//                     i++;
//                     j++;
//                   }
//                   //filling 0s in the grumpy windows
//                   for(int i=maxLoss;i<maxIdx+k;i++){
//                     grumpy[i]=0;
//                   }
//                   //sum of satisfaction
//                   int sum=0;
//                   for(int i=0;i<n;i++){
//                     if(grumpy[j]==0) sum += arr[i];
//                   }
//                   return sum;
    
//         }
//     };