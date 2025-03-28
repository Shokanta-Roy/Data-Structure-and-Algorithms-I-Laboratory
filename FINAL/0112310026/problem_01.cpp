#include <bits/stdc++.h>

using namespace std;

int evaluatePostfix(string expr)
{
    stack<int> stk;
    stringstream ss(expr);
    string token;

    while (ss >> token)
    {
        if (isdigit(token[0]) || (token.length() > 1 && isdigit(token[1])))
        {
            stk.push(stoi(token));
        }
        else
        {
            int b = stk.top();
            stk.pop();
            int a = stk.top();
            stk.pop();
            int result = 0;

            switch (token[0])
            {
            case '+':
                result = a + b;
                break;
            case '-':
                result = a - b;
                break;
            case '*':
                result = a * b;
                break;
            case '/':
                if (b == 0)
                {
                    cerr << "Error: Division by zero!" << endl;
                    return -1;
                }
                result = a / b;
                break;
            }
            stk.push(result);
        }
    }

    return stk.top(); 
}

int main()
{
    string expr = "5 1 2 + 4 * + 3 -";
    cout << "Result: " << evaluatePostfix(expr) << endl;
    return 0;
}
