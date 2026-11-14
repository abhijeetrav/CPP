#include<iostream>
using namespace std;
class Gun{
    public:
    int ammo;
    int damage;
    int scope;
};
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    
    class Helmet{
        int hp;
        int level;
    public:

    void setHp(int hp){
        this->hp=hp;
    }
    void setLevel(int level){
        this->level=level;
    }
    void getHp(){
        this->hp;
    }
    void getlevel(){
        this->level;
    }
};
    int health;
    int age;
    int score;
    Helmet helmet;

public:
    int getHealth(){
        return health;
    }
    int getScore(){
        return age;
    }
    int getAge(){
        return health;
    }
    int isAlive(){
        return alive;
    }
       
    void setHealth(int health){//Player::health=health -.scope resolution operator

        this->health=health;
    }
    void setScore(int score){
        this->age=age;
    }
    void setAge(int age){
        this->age=age;
    }
    void setIsalive(bool alive){
        this->alive=alive;
    }
    void setHelmet(int level){
        Helmet *helmet = new Helmet;
        helmet->setLevel(level);
        int health = 0;
            if(level==1)
                health = 25;
            else if(level==2)
                health = 50;
            else if(level ==3)
                health =100;
            else 
                cout<<"error,invalid level";
                    helmet->setHp(health);
                    this->helmet=*helmet;
    }
};

int addScore(Player a,Player b){
   return a.getScore(),b.getScore();
}
Player getMaxScorePlayer(Player a ,Player b){
    if(a.getScore()>b.getScore())
        return a;
    else 
        return b;
}
int main(){

            Player harsh;
            Player raghav;
            Player *urvi=new Player;
            Gun akm;
            akm.ammo=100;
            akm.damage=50;
            akm.scope=2;
   
            harsh.setAge(100);
            harsh.setHealth(90);
            harsh.setIsalive(true);
            harsh.setScore(60);
            harsh.setGun(akm);
            harsh.setHelmet(2);

            Gun awm;
            awm.ammo=15;
            awm.damage=150;
            awm.scope=8;
    
            raghav.setAge(200);
            raghav.setHealth(110);
            raghav.setIsalive(false);
            raghav.setScore(60);
            raghav.setGun(awm);
            raghav.setHelmet(3);
            Gun gun123 = raghav.getGun();
            cout<<gun123.damage<<endl;
            cout<<gun123.ammo<<endl;
            cout<<gun123.scope<<endl;

            


            urvi->setHealth(20);
            cout<<urvi->getHealth()<<endl;
            cout<<addScore(harsh,raghav)<<endl;       
        
            Player sanket=getMaxScorePlayer(harsh,raghav);
            
            cout<<sanket.getScore()<<endl;
            cout<<sanket.getHealth()<<endl;
}