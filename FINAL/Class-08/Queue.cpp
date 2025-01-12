#include<bits/stdc++.h>
using namespace std;

class Queue
{
    int front;
    int rear;
    int arr[100];
public:
    //constructor
    Queue()
    {
        front=-1;
        rear=-1;
    }

    //checking, if the queue is empty;
    bool isEmpty()
    {
        if(front==-1 || front>rear)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    //checking, if the queue is full;
    bool isFull()
    {
        if(rear==99) //here the size of the array is 100; so, rear should be less than 100;
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    //insert a element
    void enqueue(int data)
    {
        if (isFull())
        {
            cout<<"The queue is full"<<endl;
            return;
        }
        if (isEmpty())
        {
            front=0;
        }
        rear++;
        arr[rear]=data;
    }

    //delete a element
    int dequeue()
    {
        if (isEmpty())
        {
            cout<<"The queue is empty. Nothing for dequeue."<<endl;
            return -1; //sential value for the empty queue;
        }
        int temp= arr[front];
        front++;
        if (front>rear) //can I write here isEmpty() function;
        //reset the queue, when it's empty;
        {
            front=-1;
            rear=-1;
        }
        return temp; //here is a little bit issue;
    }

    //see the element, which gonna be delete first, without deleting;
    int peek()
    {
        if (isEmpty())
        {
            cout<<"The queue is empty. Nothing to peek."<<endl;
            return;
        }
        return arr[front];
    }

    //display all the elements;
    void display()
    {
        if (isEmpty())
        {
            cout<<"The queue is empty."<<endl;
            return;
        }
        cout<<"Queue elements: "<<endl;
        for (int i = front; i <= rear; i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};
int main()
{
    Queue q;

    //enqueue the elements
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.enqueue(5);

    //dequeue one element;
    q.dequeue();

    //display the queue's elements;
    q.display();

    //checking peek
    cout<<"Front element: "<<q.peek()<<endl;

    return 0;
}