#include<iostream>
#include<queue>
using namespace std;
void display(queue<int>& q){
    if(q.empty()){
        return;
    }
    int x = q.front();
    q.pop();
    cout << x << " ";
    display(q);

}

void removeAtEven(queue<int>& q){
    int n = q.size();
    for(int i=0; i<n; i++){
        if(i%2==0){
            q.pop();
        }
        else{
            int x = q.front();
            q.pop();
            q.push(x);
        }
    }
}
int main(){
    // Remove all elements present at even positions
    // (0-indexing)
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    removeAtEven(q);
    display(q);
    return 0;
}