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
    char peek()
    {
        if (isEmpty())
        {
            cout << "The stack is EMPTY. No peek." << endl;
            return '\0';
        }
        else
        {
            return arr[top];
        }
    }
};

class Queueusingstack
{
    sta s1, s2;

public:
    void enqueue(char x)
    {
        s1.push(x);
    }

    char dequeue()
    {
        if (s1.isEmpty() && s2.isEmpty())
        {
            cout << "Queue is EMPTY. Can't dequeue." << endl;
            return '\0';
        }

        if (s2.isEmpty())
        {
            while (!s1.isEmpty())
            {
                char topElement = s1.pop();
                s2.push(topElement);
            }
        }

        return s2.pop();
    }

    char peek()
    {
        if (s1.isEmpty() && s2.isEmpty())
        {
            cout << "Queue is EMPTY. No peek." << endl;
            return '\0';
        }

        if (s2.isEmpty())
        {
            while (!s1.isEmpty())
            {
                char topElement = s1.pop();
                s2.push(topElement);
            }
        }

        return s2.peek();
    }

    bool isEmpty()
    {
        return s1.isEmpty() && s2.isEmpty();
    }

    void display()
    {
        if (s2.isEmpty())
        {
            while (!s1.isEmpty())
            {
                char topElement = s1.pop();
                s2.push(topElement);
            }
        }

        sta temp = s2;
        while (!temp.isEmpty())
        {
            cout << temp.pop() << " ";
        }
        cout << endl;
    }
};

int main()
{
    Queueusingstack q;

    q.enqueue('A');
    q.enqueue('B');
    q.enqueue('C');

    q.dequeue();
    q.display();

    return 0;
}