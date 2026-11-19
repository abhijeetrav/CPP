
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// 1. Priority function
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    if (ch == '*' || ch == '/')
        return 2;
    return 0;
}

// 2. Solve function
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    if (ch == '-')
        return val1 - val2;
    if (ch == '*')
        return val1 * val2;
    if (ch == '/')
        return val1 / val2;
    return 0;
}

// 3. Main function
int main()
{

    string s = "2+(6*4)/6-3";
    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {
        // Check digit
        if (s[i] >= '0' && s[i] <= '9')
        {
            val.push(s[i] - '0');
        }

        // Opening bracket
        else if (s[i] == '(')
        {
            op.push(s[i]);
        }

        // Closing bracket
        else if (s[i] == ')')
        {

            while (!op.empty() && op.top() != '(')
            {

                char ch = op.top();
                op.pop();

                int val2 = val.top();
                val.pop();

                int val1 = val.top();
                val.pop();

                int ans = solve(val1, val2, ch);

                val.push(ans);
            }

            if (!op.empty())
            {
                op.pop(); // Remove '('
            }
        }

        // Operators: +, -, *, /
        else
        {

            while (!op.empty() && op.top() != '(' && prio(s[i]) <= prio(op.top()))
            {
                char ch = op.top();
                op.pop();
                int val2 = val.top();
                val.pop();
                int val1 = val.top();
                val.pop();
                int ans = solve(val1, val2, ch);
                val.push(ans);
            }
            op.push(s[i]);
        }
    }

    // Process remaining operators
    while (!op.empty())
    {

        char ch = op.top();
        op.pop();
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        int ans = solve(val1, val2, ch);
        val.push(ans);
    }

    cout << "Answer: " << val.top() << endl;
}
