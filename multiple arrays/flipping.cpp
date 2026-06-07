#include<iostream>
#include<vector>
using namespace std;
vector<vector<int>> &grid;
int main(){
    int rows=grid.size();
    int cols=grid[0].size();
    for(int i=0;i<rows;i++){  
         if(grid[i][0]==0){   //flipping
           for(int j=0;j<cols;j++){
                if(grid[i][j]==0){ 
                    grid[i][j]=1; 
                  // grid[i][j]=0;
                   cout<<grid[i][j]<<" ";
                }
        //flip the column where no os zeros>no of ones
        for(int j=0;j<cols;j++){
           int noz=0;
           int noo=0;
           for(int i=0;i<rows;i++){
            if(grid[i][j]==0) noz++;
            else noo++;
        }
        if(noz>noo){
            for(int i=0;i<rows;i++){
                if(grid[i][j]=0) 
                    grid[i][j]=1;
                    cout<<grid[i][j]<<"";
                 grid[i][j]=0;
               }
           }
        }
        //for summing the binary to decimal
        int sum=0;
        for(int i=0;i<rows;i++){
            int x=1;
            for(int j=cols-1;j>=0;j--){
              sum=sum+grid[i][j]*x; 
              x*=2; 
            }
        } 
    }
}

    
