#include <bits/stdc++.h>
using namespace std;

class sta
{
    int top;
    char arr[100];

public:
    sta()
    {
        top = -1;
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if (top == 99)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void push(char x)
    {
        if (isFull())
        {
            cout << "The stack is FULL. Can't push." << endl;
            return;
        }
        else
        {
            top++;
            arr[top] = x;
        }
    }
    char pop()
    {
        if (isEmpty())
        {
            cout << "The stack is EMPTY. Can't pop." << endl;
            return '\0';
        }

        // top--;
        return arr[top--];
    }
    string reverse(string s)
    {
        top = -1;
        for (auto i : s)
        {
            push(i);
        }
        string ss = "";

        while (!isEmpty())
        {
            ss += (pop());
        }
        return ss;
    }
};

int main()
{
    sta s;
    cout << s.reverse("HELLO");
}