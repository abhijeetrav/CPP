// #include<iostream>
// #include<vector>
// #include<queue>
// using namespace std;
// class MyCircularQueue{   
// public:
//     int k;
//     int f;
//     int b;
//     int s;
//     int c;

//     vector<int> arr;
//     MyCircularQueue(int k){ // k is capacity
//         f=0;
//         b=0;
//         s=0;
//         vector<int>v(k);
//         arr =v;

//     }
    

// bool enqueue(int val){
//     if(s==c) return false;
//     arr[b]=val;
//     b++;
//     if(b==c) b=0;
//     s++;
//     return true;
// }

// bool deQueue(int value){ //push back
//     if(s==0) return false;
//     f++;
//     if(f==c) f=0;
//     s--;
//     return true;

// }


// int Front(){
//     if(s==0) return -1;
//     return arr[f];

// }

// int Rear(){ //back
//     if(s==0) return -1;
//     if(b==0) return arr[c-1];
//     return arr[b-1];

// }

// bool isEmpty(){ //empty
//     if(s==0) return true;
//     else return false;

// }
// void display(int &val){
//     if(s==0) 
//     cout<<"Circularqueue is empty "<<endl;
//     for(int i=0;i<s;i++){
//         cout<<arr[i]<<endl;
//     }
// }
// };

// int main(){
   
//     MyCircularQueue q;
//     q.enqueue(10);
//     q.enqueue(20);
//     q.display();

//     q.enqueue(30);
//     q.enqueue(40);
//     MyCircularQueue();
//     return 0;
// }

#include <iostream>
#include <vector>
using namespace std;

class MyCircularQueue {
public:
    int k;
    int f;
    int b;
    int s;
    int c;

    vector<int> arr;

    MyCircularQueue(int k) {  // k is capacity
        f = 0;
        b = 0;
        s = 0;
        c = k;

        arr = vector<int>(k);
    }

    // Insert
    bool enqueue(int val) {
        if (s == c)
            return false;

        arr[b] = val;
        b++;

        if (b == c)
            b = 0;

        s++;
        return true;
    }

    // Delete
    bool deQueue() {
        if (s == 0)
            return false;

        f++;

        if (f == c)
            f = 0;

        s--;
        return true;
    }

    // Front
    int Front() {
        if (s == 0)
            return -1;

        return arr[f];
    }

    // Rear
    int Rear() {
        if (s == 0)
            return -1;

        if (b == 0)
            return arr[c - 1];

        return arr[b - 1];
    }

    // Check empty
    bool isEmpty() {
        return s == 0;
    }

    // Check full
    bool isFull() {
        return s == c;
    }

    // Display
    void display() {
        if (s == 0) {
            cout << "Circular Queue is empty" << endl;
            return;
        }

        for (int i = 0; i < s; i++) {
            int idx = (f + i) % c;
            cout << arr[idx] << " ";
        }

        cout << endl;
    }
};

int main() {
    MyCircularQueue q(5);
 
    q.enqueue(10);
    q.enqueue(20);
    q.display();

    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);

    q.display();

    q.deQueue();
    q.deQueue();

    q.display();

    q.enqueue(60);
    q.enqueue(70);

    q.display();

    cout << "Front: " << q.Front() << endl;
    cout << "Rear: " << q.Rear() << endl;

    return 0;
}