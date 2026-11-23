#include<iostream>
#include<stack>
#include<array>
using namespace std;
class Node{
public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }

};
class Queue{
public:
    Node* head;
    Node* tail;
    int s;
        Queue(){
        head=tail=NULL;
        s=0;

    }

void insertAtTail(int val){
    Node* temp=new Node(val);
    if(s==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    s++;
} 
void insertAtHead(int val){
    Node* temp=new Node(val);
    if(s==0) head=tail=temp;
    else{
        temp->next=head;
        head=temp;
    }
    s++;
}
void push(int val){
    Node* temp= new Node(val);
    if(s==0) head=tail=temp;
    else{
        tail->next=temp;
        tail=temp;
    }
    s++;
}
void pop(){
    if(s==0){
        cout<<" Queue is epmty"<<endl;
        return ;

    }
    head=head->next;
    s--;
}
int front(){
    if(s==0){
        cout<<"Queue is empty"<<endl;
        return -1;
    }
    return head->val;
}
int size(){
    return s;
}
bool empty(){
    if(s==0) return true;
    else return false;
}
int back(){
    if(s==0){
        cout<<"QUEUE IS EMPTY"<<endl;
    }
     return tail->val;
}
void display(){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void deleteAtTail(){
    if(s==0){
        cout<<"List is empty"<<endl;
        return ;
    }
    Node* temp=head;
    while(temp->next!=tail){
        temp=temp->next;
    }
    temp->next=NULL;
    tail=temp;
    s--;
}   
void insertAtIdx(int idx,int val){
    if(idx<0 || idx>s) cout<<"invalid index index"<<endl;
    else if(idx==0) insertAtHead(val);
    else if(idx==s) insertAtTail(val);
    else{
        Node* t=new Node(val);
        Node* temp=head;
        for(int i=1;i<idx;i++){
            temp=temp->next;
        }
        t->next=temp->next;
    
  }
}

int getAtIdx(int idx){
    if(idx<0 || idx>=s){
        cout<<"invalid index"<<endl;
        return -1;
    }
    else if(idx==0) return head->val;
    else if(idx==s-1) tail->val;
    else{
        Node* temp=head;
        for(int i=0;i<=idx;i++){
            temp=temp->next;
        }
        return temp->val;
    }
}
};
int main(){
    // Node* a=new Node(10);
    // Node* b=new Node(20);
    // Node* c=new Node(30);
    // a->next=b;
    // b->next=c;
    // Node* h=a;
    // delete(h);
    // cout<<a->val;
    // int val;
    // return 0;
    Queue q; 
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.pop();
    q.display();

};