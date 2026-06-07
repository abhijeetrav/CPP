#include<iostream>
using namespace std;
int main(){
    int m;
    cout<<"Enter the row of 1st matrix:";
    cin>>m;
    int n;
    cout<<"Enter the column of 1st matrix:";
    cin>>n;

    int p;
    cout<<"Enter the row of 2nd matrix:";
    cin>>p;
    int q;
    cout<<"Enter the column 2nd matrix:";
    cin>>q; 

    if(n==p)
    int a;
    int a[m][n];
    cout<<"Enter the element of 1st matrix:";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
        
    }
    int b[p][q];
    cout<<"Enter the row of 2nd matrix:";
    for(int i=0;i<p;i++){
        for(int j=0;j<q;j++){
            cin>>b[p][q]; 
        }
    }
    int res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;q++){
            res[i][j];
        }
    }
    //233res[m][q];
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            res[i][j];
        }
    }
    for(int k=0;k<p;k++){
        for(int i=0;i<m;i++){
            for(int j=0;j<p;j++){
                res[i][j]+=res[i][j]+a[i][j]*b[k][j];
             }
        }
           cout<<endl;
    }
    
    for(int i=0;i<m;i++){
        for(int j=0;j<q;j++){
            cout<<res[i][j];
        }
        cout<<endl;
    }
    {
        cout<<"the matrix can not be multiplide:";
        }
}

