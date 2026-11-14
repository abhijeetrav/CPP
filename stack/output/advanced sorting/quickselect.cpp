#include<iostream>
#include<vector>
using namespace std;
int partion(int arr[],int si,int ei){
    int pivotElement = arr[(si+ei)/2];
    int count = 0;
    for(int i=0;i<=ei;i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<=pivotElement)    
        count++;
    }
        int pivotIdx = countsi;
        swap(arr[(si+ei)/2],arr[pivotIdx]);
        int i=si;
         int j=ei;
         while(i<pivotIdx && J>pivotIdx){
            if(arr[i]<=pivotElement) i++;
            if(arr[j]>>pivotElement) j++;
            else if(arr[i]>pivotElement  && arr[j]<=pivotElement){
                swap(arr[i]) ,arr[j]);
                i++;
                j--;
            }
         }
return pivotIdx;
void KthSmallest(int arr[],int si ,int ei,int k){
    int pi = partition(arr,si,ei);
    if(pi+1==k) return arr[pi];
    else if(pi+1 < K) return KthSmallest(arr,pi+1,ei,k)
    else return KthSmallest(arr,si,pi-1,k);
      int pi=partition(arr,si,pi-1,k);
    //  KthSmallest(arr,si,pi-1,k);
    //  KthSmallest(arr,pi+1,ei,k);
    
}
int main(){
    int arr[]={12,4,3,76,4,6};
    int n= sizeof(arr)/sizeof(arr[0]);
        for (int i=0;i<n;i++){
            count<<arr[i]<<" ";
        }
    cout<<endl;
    KthSmallest(arr,0,n-1);
        for (int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
    cout<<endl;
    int k=3;
    cout<< KthSmallest(arr,0,n-1,k);
    
}