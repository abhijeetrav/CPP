#include<iostream>
using namespace std;
int main(){
    int i;
    int j;
     int arr[]=m;
    cout<<"Enter the row";
    cin>>m;
    for(int i = 0;i<m;i++){
        for(int j = 0;j<m;j++){
            int arr[i][j];           //inputting
            cout<<arr[i][j];
        }
        cout<<endl;
    }
    for(int i = 0;i<m;i++){
        for(int j = 0;j<m;j++){      //outputting
            cin>>arr[i][j];
        }
        cout<<arr[i][j];
    }
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];     //swapping
            arr[j][i] = temp;
            cout<<arr[i][j];
        }
         cout<<endl;
    }
    for(int k=0;k<m;k++){
        for(int i=0;i<m-1;i++){
            for(int j=0;j<m-1;j--){    //swapping
                int arr[i][j];
        }
    }
    cout<<arr[i][j]<<" ";
    }
    cout<<endl;
}