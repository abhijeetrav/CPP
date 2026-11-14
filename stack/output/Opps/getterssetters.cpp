#include<iostream>
using namespace std;
class player{
    private:
        int score;
        int health;
    public://setterrs
    void setscore(int s){
        cout<<"score is changing!"<<endl;
        score=s;
    } 
     void sethealth(int h){
        cout<<"score is changing!"<<endl;
        health=h;
    } 

    //gettrs
        int  getscore(){
        return score;
    }
        int  gethealth(){
         return health;
    }
};
int main(){
    player amit;
    amit.setscore(10);
    amit.sethealth(20);
    cout<<amit.getscore()<<endl;
    cout<<amit.gethealth();
}