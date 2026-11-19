/*
1.if s[i] is a digit then push into val
2.if s[i] id +,-,*,/ 
  (a) if op stack is empty then push
  (b)if pr(st.top()<pr(s[i]) then push
  (c)pr(st.top())>=pr(s[i]) ->kaam->solve fuction

*/
#include <iostream>
#include <stack>
#include <string>
using namespace std;

// 1. Priority function
int prio(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

// 2. Solve function
int solve(int val2, int val1, char ch)
{
    if (ch == '+')
        return val2 + val1;
    if (ch == '-')
        return val2 - val1;
    if (ch == '*')
        return val2 * val1;
    if (ch == '/')
        return val2 / val1;

    return 0;
}

int main()
{
    string s = "2+6*4/8-3";

    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++)
    {

        // Check if character is a digit
        if (s[i] >= '0' && s[i] <= '9'){
            val.push(s[i] - '0');
        }
        else{
            // Check operator priority
            if (op.empty() || prio(s[i]) > prio(op.top())){
                op.push(s[i]);
            }
            else{
                while (!op.empty() && prio(s[i]) <= prio(op.top())){
                    char ch = op.top();
                    op.pop();
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    int ans = solve(val2, val1, ch);
                    val.push(ans);
                }

                op.push(s[i]);
            }
        }
    }

    // Process remaining operators
    // the operators stack can have values
    //so make it empty
    while (!op.empty())
    {

        char ch = op.top();
        op.pop();

        int val2 = val.top();
        val.pop();

        int val1 = val.top();
        val.pop();

        int ans = solve(val2, val1, ch);
        val.push(ans);
    }

    cout<< val.top() << endl;

    return 0;
}
