#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void reverseQueue(queue<int>& q){ //this is use of fuction 
    // Base condition
    if(q.empty()){
        return;
    }
    // Store front element
    int x = q.front();
    q.pop();
    // Recursive call
    reverseQueue(q);

    // Push element at back
    q.push(x);
}
void reverse(queue<int>& q){
    stack<int>st;
    //empty the queue into stack
    while(q.size()>0){
        int x=q.front();
        q.pop();
        st.push(x);
    }
    //empty stack into queue
    while(st.size()>0){
        int x=st.top();
        st.pop();
        q.push(x);
    }
    


}

int main(){
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    reverse(q);
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}
