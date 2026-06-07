class calculator{
    public:
    int a;
    int b;
    void add(){
        a+b;
    }
    void substract(){
        a-b;
    }
};
int main(){
    calculator calci;
    calci.a=10;
    calci.b=7;
    calci.add();
    calci.substract();

}