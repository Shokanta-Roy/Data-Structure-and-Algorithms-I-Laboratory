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

void find_middle()
{
    if (head == NULL) 
    {
        cout << "empty" << endl;
        return;
    }

    node *slow = head;  
    node *fast = head;  

    while (fast != NULL && fast->next != NULL) 
    {
        slow = slow->next;         
        fast = fast->next->next;  
    }

    cout << slow->data << endl;
}

void printlist()
{
    node *current = head;
    if (current == NULL)
    {
        cout << "emppty" << endl;
        return;
    }
    
    while (current != NULL)
    {
        cout << current->data;
        if (current->next != NULL)
        {
            cout << " ";  
        }
        current = current->next;
    }
    //cout << " " << endl;  
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
    find_middle();
    //printlist();
    
}