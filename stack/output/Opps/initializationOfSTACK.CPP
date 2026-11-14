#include <iostream>
#include <stack>
int main() {
    std::stack<int> myStack;
    myStack.push(10);
    myStack.push(20);
    myStack.push(30);
    while (!myStack.empty()) {
        std::cout << "Top element: " << myStack.top() << std::endl;
        myStack.pop();
    }
    return 0;
}
