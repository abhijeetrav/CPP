#include<iostream>
using namespace std;
class Cricketer{
    public:
    char name;
    int age;
    int numberOfTestMaches;
    int averagescore;

};
int main(){
    cout<<"\n\n\n";
    Cricketer virat;
    virat.name='V';
    virat.age=45;
    virat.numberOfTestMaches=100;
    virat.averagescore=45;

    Cricketer dhoni;
    dhoni.name='D';
    dhoni.age=45;
    dhoni.numberOfTestMaches=100;
    dhoni.averagescore=45;

    for( int i=0;i<2;i++){
        Cricketer *cricketer = new Cricketer;
        cricketer->name;
        cin>> 
    }
    Cricketer cricketers[2] ={virat,dhoni};

    for( int i=0;i<2;i++){
        cout<<cricketers[i].name<<endl;
        cout<<cricketers[i].age<<endl;
        cout<<cricketers[i].numberOfTestMaches<<endl;
        cout<<cricketers[i].averagescore<<endl;
}
}

