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
bool search_element(int value)
{
    node *current = head;
    int position = 0;  
    while (current != NULL)
    {
        if (current->data == value)
        {
            cout<<position<<endl;
            return true;
        }
        current = current->next;
        position++;
    }

    return false;
}
void reverse_list()
{
    node *prev = NULL;  
    node *current = head; 
    node *next = NULL;   

    while (current != NULL)
    {
        next = current->next; 
        current->next = prev; 
        prev = current;       
        current = next;       
    }
    head = prev; 
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
            cout << "  ";
        }
        current = current->next;
    }
    cout << " " << endl;
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
    reverse_list();

    printlist();
    
    return 0;
}
