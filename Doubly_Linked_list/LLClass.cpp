#include<iostream>
using namespace std;
class Node{  //user define data type
public:
    int val;
    int prev;
    int temp;
    Node* next;
    Node(int val){
        this->val = val;
        this->next = NULL;

    }
};
class LinkedList{
    public:
    Node* head;
    Node* tail;
    int size;
    LinkedList(){
        head = tail= NULL;
        size =0;
 }

 void insertAtTail(int val){
    Node* temp = new Node(val);
    if(size ==0) head = tail = temp;
    else{
            tail->next = temp;
            tail = temp;
        }
        size++;
}

void insertAtHead(int val){
    Node* temp = new Node(val);
    if(size == 0) head = tail = temp;
    else {
        temp->next = head;
        head = temp;
    }
    size++;
}

void insertAtIdx(int idx , int val){
    if(idx < 0 || idx>size) cout<<"Invaluid index"<<endl;
    else if(idx==0) insertAtHead(val);
    else if(idx==size) insertAtTail(val);
    else{
        Node* t  =new Node(val);
        Node* temp = head;
        for(int i=0; i<idx-1; i++){
            temp = temp->next;
        }
        t->next = temp->next;
        temp->next = t;
        t->prev = temp; //extra 
        t->next->prev = t;// extra
        size++;
    }
}
int getAtIdx(int idx){
    if(idx < 0 || idx >= size) {
        cout<<"Invalid index"<<endl;
        return -1; // or throw an exception
    }
    else if (idx ==0) return head->val;
    else if(idx == size-1) return tail->val;
    else{
        Node* temp = head;
        for(int i=0; i<idx; i++){
            temp = temp->next;
        }
        return temp->val;
    }
}; 
void deleteAtHead(int idx){
    if(size == 0){
        cout<<"list is empty";
        return;
        head==head->next;    
    }
        temp->next=NULL;
        tail =temp;
        size--;
}
void deleteAtTail(int idx){
    if(size == 0){
        cout<<"list is empty";
        return;
    }
      Node*  temp=head;
      while(temp->next!=tail){
        temp = temp->next;
      }
        temp->next=NULL;
        tail == temp;
        size--;
}
void deleteAtIdx(int Idx){
    if(size==0){
        cout<<"list is empty";
        return;
    }
else if( idx< 0 || idx>=size){
    cout<<"Invalid index";
    return;
}
    else if(idx==0) return deleteAtHead();
    else if(idx==size-1) return deleteAtTail();
    else{
        Node*temp =head;
        for(int i=1;i<=idx-1;i++){
        temp = temp->next;
}
        temp->next = temp->next->next;
        size--;
    }
}

void display(){
    Node* temp =head;
    while(temp!= NULL){
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout<<endl;
};
int main(){
    LinkedList li;
    li.insertAtTail(10);
    li.display();
    li.insertAtTail(20);
    li.display();
    li.insertAtTail(30);
    li.insertAtTail(40);
    li.display();
    li.insertAtHead(50);
    li.display();
    li.insertAtIdx(2,60);
    li.display();
   
}
}
