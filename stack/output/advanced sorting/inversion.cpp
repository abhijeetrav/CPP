#include<iostream>
#include<vector>
using namespace std;
int count=0;
int inversion(vector<int>& a,vector<int>& b){
    int count = 0;
    int i=0,j=0,k=0,res=0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count+=(a.size()-i);
            j++;
            else{
                i++;
                }
        }
    }

if(i==a.size()) while(j<b.size()) res[k++] = b[j++];
if(j==b.size()) while(j<a.size()) res[k++] = a[j++];

void mergeSort(vector<int>& v){
    int n=v.size();
    if(n==1) return;
    int n1 = n2,n2 = n-n/2;

    vector<int> a(n1),b(n2){
    for(int i=0;i<n1;i++)
        a[i] = v[i];
        cout +=mergeSort(a);
         cout +=mergeSort(b);
          cout +=inversion(a,b);
        count<<mergeSort(b);
    for(int i=0;i<n2;i++)
        b[i] = v[i+n1];
        mergeSort(a);
        mergeSort(b);
        merge(a,b,v);
        a.clear();
        b.clear();
        c+= inversion(a,b);
        return count;
}
}
int main(){
    int arr[] ={1,2,3,4,5,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr,arr+n);
        for(int i =0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        cout<<endl;
        mergeSort(v);
        for(int i=0;i<v.size();i++){
            count<<endl;
            cout<<mergeSort(v);

    }
}
