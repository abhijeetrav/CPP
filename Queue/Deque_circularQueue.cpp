
#include <iostream>
#include <stack>
#include <queue>
using namespace std;

// Display queue
void display(queue<int> &q)
{
    int n = q.size();

    for (int i = 0; i < n; i++)
    {
        int x = q.front();
        cout << x << " ";

        q.pop();
        q.push(x);
    }

    cout << endl;
}

// Reverse first K elements
void reverseK(int k, queue<int> &q)
{

    int n = q.size();

    // Edge cases
    if (k <= 0 || k > n)
        return;

    stack<int> st;

    // 1. Queue to Stack
    for (int i = 0; i < k; i++)
    {
        int x = q.front();
        st.push(x);
        q.pop();
    }

    // 2. Stack to Queue
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }

    // 3. Move remaining elements
    for (int i = 0; i < n - k; i++)
    {
        int x = q.front();
        q.pop();
        q.push(x);
    }
}

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);

    cout << "Original Queue: ";
    display(q);

    int k = 2;

    reverseK(k, q);

    cout << "After Reversing First K Elements: ";
    display(q);

    return 0;
}
