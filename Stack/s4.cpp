#include <bits/stdc++.h>
using namespace std;

class sta
{
    int top;
    int min;
    int arr[100];

public:
    sta()
    {
        top = -1;
        min = INT32_MAX;
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
    void push(int x)
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
            if (x < min)
            {
                min = x;
            }
        }
    }
    int pop()
    {
        if (isEmpty())
        {
            cout << "The stack is EMPTY. Can't pop." << endl;
            return INT32_MIN;
        }

        // top--;
        return arr[top--];
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "The stack is EMPTY. No peek." << endl;
            return INT32_MIN;
        }
        else
        {
            return arr[top];
        }
    }
    int getmin()
    {
        return min;
    }
};

int main()
{
    sta s;
    s.push(4);
    s.push(12);
    s.push(2);
    s.push(10);

    cout << s.getmin();
}