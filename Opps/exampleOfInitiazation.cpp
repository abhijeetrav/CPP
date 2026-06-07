#include <iostream>
#include <stack>
using namespace std;
class Bike
{
public:
    static int noOfBikes; // this belogs to the class
    int tyreSize;
    int engineSize;

    Bike(int tS, int eS = 200) :tyreSize(tS), engineSize(eS) {}
};

    
int main()
{
    Bike royalEnfield(15,350);
    Bike bajaj(13);
    cout << royalEnfield.tyreSize << " " << royalEnfield.engineSize << endl;
    cout << bajaj.tyreSize << " " << bajaj.engineSize << endl;
}