
#include <iostream>
using namespace std;
class Stack{
    int arr[100];
    int idx;

public:
    Stack(){
        idx = -1;
    }

    // Insert element
    void push(int val){
        if (idx == 99){
            cout << "Stack Overflow\n";
            return;
        }

        idx++;
        arr[idx] = val;
    }

    // Remove top element
    void pop(){
        if (idx == -1){
            cout << "Stack Underflow\n";
            return;
        }

        idx--;
    }

    // Return top element
    int top(){
        if (idx == -1)
            return -1;

        return arr[idx];
    }

    // Check empty
    bool empty(){
        return idx == -1;
    }

    // Return size
    int size(){
        return idx + 1;
    }

    // Print stack
    void display(){
        for (int i = idx; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main(){
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.display();
    cout << "Top: " << st.top() << endl;
    st.pop();
    cout << "After pop: ";
    st.display();
    return 0;
}
