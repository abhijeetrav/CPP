#include<iostream>
using namespace std;
bool judgeSquare(int c){
    if(root*root==n) return true;
    else return false;
    
    }
    bool judgerSquare(int c){
        int x;
        int y;
    int isPerfectSquare=(int)x*(int)(x)+(int)y*(int)*y;
    
    while(x<=y){
        if(isPerfectSquare(x) && isPerfectSquare(y)){
            return true;
        }
        else if(!isPerfectSquare(y)){
            y=(int)sqrt(y)*(int)sqrt(y);
            x=IsPerfectSquare-y;
        }
        else{
            x=((int)sqrt(x)+1)*((int)sqrt(x)+1);
            y=IsPerfectSquare-x;
        }
        return int IsPerfectSquare;
    }
}
