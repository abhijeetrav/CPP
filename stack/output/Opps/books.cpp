#include<iostream>
using namespace std;
class Book{
    public:
        char name;
        int price;
        int noOfpage;
        int countPresent;

    int countPresent(int p){
        if(price < p)
            return 1;
        else 
            return 0;
    }
    bool isBookPresent(char book){
        if(name == book)
            return true;
        else 
            return false;
    }
};


int main(){
        Book harrypotter;
        harrypotter.name='H';
        harrypotter.price=1000;
        harrypotter.noOfpage=500;
        cout<<harrypotter.isBookPresent('B');

}
