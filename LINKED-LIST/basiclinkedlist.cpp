#include<iostream>
using namespace std;
class Node{
    public:
    int  val;
    Node*next;
    Node(int val){
    this->val=val;
    this->next=NULL;
    }
};
int main(){ 
        Node a(10);
        Node b(20);
        Node c(30);
        Node d(40);
    //forming 
        a.next=&b;
        b.next=&c;
        c.next=&d;
        d.next=NULL;
        cout<<a.next<<endl;
        cout<<b.next<<endl;
        cout<<c.next<<endl;
        cout<<d.next<<endl;
        
        cout<<(a.next).next<<endl;
        cout<<*(a.next).val<<endl;


}
