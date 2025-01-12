#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int front;
    int rear;
    int size;
    int arr[100];

public:
    // constructor
    Queue()
    {
        front = -1;
        rear = -1;
        size = 100;
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
        if ((rear + 1) % size == front)
        {
            return true;
        }
        return false;
    }
    void enqueue(int data)
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
        rear = (rear + 1) % size;
        arr[rear] = data;
    }
    int dequeue()
    {
        if (isEmpty())
        {
            cout << "The queue is empty. Nothing for dequeue." << endl;
            return -1;
        }
        int temp = arr[front];
        front = (front + 1) % size;
        if ((rear + 1) % size == front)
        // reset the queue
        {
            front = -1;
            rear = -1;
        }
        return temp;
    }
    int peek()
    {
        if (isEmpty())
        {
            cout << "The queue is empty. Nothing to peek." << endl;
            return;
        }
        return arr[front];
    }

    // display
};

int main()
{
    Queue q;

    return 0;
}