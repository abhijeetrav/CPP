#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,3,5,2,4,5,6,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k=3;
    int maxSum = INT_MIN;
    int maxIdx=-1;
    for (int i=0;i<n-k;i++){//total no ops=n-k+1
        int sum=0;
        for (int j=i;j<i+k;j++){ // k times
            sum=sum+arr[j];
        }
        maxSum=max(maxSum,sum);      
    }
    if(maxSum<sum){
        maxSum=sum;
        maxIdx=i;
        
    }

    //tno =(n-k+1)*k
    cout<<maxSum<<endl;
    cout<<maxIdx<<endl;
}
    

