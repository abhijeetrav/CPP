#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node* prev;  // extra for doubly linked list
    Node(int val){
        this->val = val;
        this->next=NULL;
        this->prev= NULL; // EXTRA FOR DOUBLY LINKED LIST; 
    }
};
void display(Node* head){
    while(head){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void display(Node* head){
    if(head =NULL) return; //o(n) space as well 
    cout<<head->val<<" ";
    display(head->next);
}
void displayRecdev(Node* head){  //o(n) space 
    if(head = NULL ) return ;
    displayRecdev(head->next);
    cout<<head->val<<" ";
}

void displayRev(Node* tail){
    while(tail){
        cout<<tail->val<<" ";
        tail = tail->prev;
    }
    cout<<endl;
}
int main(){
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->prev= d;
    d->prev = c;
    c->prev = b; 
    b->prev = a; 
    display(a); 
    displayRev(e); // tail is e}  
