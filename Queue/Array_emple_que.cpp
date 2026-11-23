#include<iostream>
#include<array>
#include<stack>
#include<queue> 
using namespace std;
class Queue{
public:
    int f;//front 
    int b;//back

    vector<int> arr;
    Queue(int val){
        f=0;
        b=0;
        vector<int> v(val);
        arr=v;

    }
    void push(int val){ //push
        if(b==arr.size()){
            cout<<"Queue is empty"<<endl;
        }
        arr[b]=val;
        b++;

    }
    void pop(){ //pop
        if(f-b==0){
            cout<<"Queue is empty"<<endl;
        }
        f++;
    }
    int front(){ //front 
        if(f-b==0){
            cout<<"Queue is empty"<<endl;
            return -1;
        }
        return arr[f]; 

    }
    int back(){ //back
        if(f-b==0){
            cout<<"Queue id empty"<<endl;
            return -1;
        }
        return arr[b-1];
    }
    int size(){ //size
        return b-f;
    }
    bool empty(){ // empty check
        if(f-b==0) return true;
        else return false;
    }


void display(){
    for(int i=f;i<b;i++){
        cout<<arr[i]<<endl;
    }
    cout<<endl;

   }
};
int main(){
    Queue q(5);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // display(q);



    return 0;
} 