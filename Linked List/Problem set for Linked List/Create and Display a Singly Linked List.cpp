#include<bits/stdc++.h>
using namespace std;


struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insert_at_last(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = NULL;
    
    if (head == NULL)
    {
        head = newnode;
    }
    else
    {
        node *current = head;
        while (current->next != NULL)
        {
            current = current->next;
        }
        current->next = newnode;
    }
}

void printlist()
{
    node *current = head;
    if (current == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }
    
    while (current != NULL)
    {
        cout << current->data;
        if (current->next != NULL)
        {
            cout << " → ";  
        }
        current = current->next;
    }
    cout << " → NULL" << endl;  
}


int main()
{
    int n; cin>>n;
    int value;
    for (int i = 0; i < n; i++)
    {
        cin>>value;
        insert_at_last(value);
    }

    printlist();
    
}