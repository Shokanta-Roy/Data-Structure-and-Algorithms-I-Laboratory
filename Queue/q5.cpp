#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int front;
    int rear;
    string arr[100];

public:
    // constructor
    Queue()
    {
        front = -1;
        rear = -1;
    }
    // in this problem I need to create some function;
    /*1.enqueue(); okay Done;
      2.dequeue(); okay Done;
      3.peek(); okay Done;
      4.isEmpty(); okay Done;
    */
    bool isEmpty()
    {
        if (front == -1 && rear == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    // for the enqueue function we need to check "is the queue is Full"
    bool isFull()
    {
        if (rear == 99)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void enqueue(string data)
    {
        if (isFull())
        {
            cout << "The queue is Full." << endl;
            return;
        }
        if (isEmpty())
        {
            front = 0;
        }
        rear++;
        arr[rear] = data;
    }
    string dequeue()
    {
        if (isEmpty())
        {
            cout << "The queue is empty. Nothing for dequeue." << endl;
            return NULL;
        }
        string temp = arr[front];
        front++;
        if (front > rear)
        // reset the queue
        {
            front = -1;
            rear = -1;
        }
        return temp;
    }
    string peek()
    {
        if (isEmpty())
        {
            cout << "The queue is empty. Nothing to peek." << endl;
            return NULL;
        }
        return arr[front];
    }

    // display
    void generateBin(int n)
    {
        enqueue("1");
        for (int i = 0; i < n; i++)
        {
            string temp = dequeue();
            cout << temp << " ";
            enqueue(temp + "0");
            enqueue(temp + "1");
        }
    }
};

int main()
{
    Queue q;

    q.generateBin(5);
    return 0;
}