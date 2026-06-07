#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"Enetr the row of matrix:"
    cin>>m;

    int n;
    cout<<"Enter the colms of matrix:";
    cin>>n;

    int arr[m][n];
      for(int i=m-1;i>=0;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
      }

      for(int i=0;i<m;i++){                //   ______>>>>>
        if(i%2!=0){                      //   |
              for(int j=0;j<n;j++){        //   |<<<<<<______
              cout<<arr[i][j]<<            //   ______>>>>>>> 
             }
            }
        else{
                for(int j=n-1;j>=0;j--)
                   cout<<arr[i][j]<<"";
            }
          }
    }
    cin>>endl;
}

      
