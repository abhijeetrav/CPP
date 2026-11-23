#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;
Node(int val){
    this->val=val;
    this->next=NULL;
    this->prev=NULL;//extra for LL
   } 
};

class DLL{//user defined data structure
public:
    
    Node* head;
    Node* tail;
    int size;
    DLL(int val){
        Node* temp;
        temp=head;
        temp=temp->next;
        

    }
    DLL(){
        head=tail=NULL;
        size=0;
    }

};
class Deque{
public:
   Node* head;
   Node* tail;
   int size;
   DLL(){
      head=tail=NULL;
      size=0;
   }
   
};
int main(){
    Node* a=new Node(a);


}