//type of class in oops
//1.private
//2.public
//3.protected
#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    int health;
    void showhealth(){
        cout<<"showhealth:"<<health;
    }
     void showscore(){
        cout<<"showscore:"<<score;
    }
};
int main(){
    int score[100]={};
    int health[95]={};

    Player amit;
    amit.score=90;
    amit.health=89;

    amit.showhealth();
    amit.showscore();


}
