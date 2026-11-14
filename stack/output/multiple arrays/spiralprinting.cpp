#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row of matrix:";
    cin>>m;
    int n;
    cout<<"Enter the colmn of matrix:";
    cin>>n;
//inputting
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){            
            cin>>arr[i][j];
        }
    }
    cout<<endl;
//spiral
int minr=0;
int minc=0;
int maxr=m-1;
int maxc=n-1;
int tne=m*n;
int cout=0;
while(minr<=maxr && minc<=maxc){
    //right==============
    for(int j=minc;j<=maxc;cout<tne;j++){
        cout<<arr[minr][j]<<" ";
    }
    minr++;
    if(minr>maxr || minc>maxc)break;
    //down===============
    for(int i=minr;i<=maxr;cout<tne;i++){
        cout<<arr[i][maxc]<<" ";
    }
    maxc--;
    //left===============
    if(minr>maxr || minc>maxc)break;
    for(int j=maxc;j>=minc;cout<tne;j--){
        cout<<arr[maxr][j]<<" ";
    }       
    maxr--;
    //up=================
    if(minr>maxr || minc>maxc)break;
    for(int i=maxr;i>=minr;cout<tne;i--){
        cout<<arr[i][minc]<<" ";
    }
    minc++;
}

