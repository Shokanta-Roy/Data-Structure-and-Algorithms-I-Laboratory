#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};

node *head = NULL;

void insert_at_first(int value)
{
    node *newnode = new node();
    newnode->data = value;
    newnode->next = head; 
    
    head = newnode; 
}

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

void remove_duplicates()
{
    if (head == NULL) return; 
    node* current = head;

    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            node* temp = current->next;
            current->next = current->next->next;  
            delete temp;  
        }
        else
        {
            current = current->next; 
        }
    }
}
void printlist()
{
    node *current = head;
    if (current == NULL)
    {
        cout << "empty" << endl;
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
    int n, value;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> value;
        insert_at_last(value); 
    }
    remove_duplicates();

    printlist();
    
    return 0;
}
