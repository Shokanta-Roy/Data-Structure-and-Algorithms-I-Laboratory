#include <bits/stdc++.h>
using namespace std;

#define N 5
int s[N];
int top = -1;

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
    if (top == N - 1)
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
        s[top] = x;
    }
}
void pop()
{
    if (isEmpty())
    {
        cout << "The stack is EMPTY. Can't pop." << endl;
        return;
    }
    else
    {
        top--;
    }
}
int peek()
{
    if (isEmpty())
    {
        cout << "The stack is EMPTY. No peek." << endl;
        return;
    }
    else
    {
        return s[top];
    }
}
void display()
{
    if (isEmpty())
    {
        cout << "The stack is EMPTY. Nothing for display." << endl;
        return;
    }
    else
    {
        cout << "Elements: ";
        for (int i = 0; i < N; i++)
        {
            cout << s[i] << " ";
        }
        cout << endl;
    }
}
void display1()
{
    if (isEmpty())
    {
        cout << "The stack is EMPTY. Nothing for display." << endl;
        return;
    }
    else
    {
    }
}

int main()
{

    return 0;
}
