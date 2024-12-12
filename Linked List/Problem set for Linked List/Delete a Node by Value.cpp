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

void delete_node_by_value(int value)
{
    if (head == NULL)
    {
        cout << "List is empty!" << endl;
        return;
    }

    if (head->data == value)
    {
        node *temp = head;
        head = head->next;
        delete temp;
        return;
    }

    node *current = head;
    while (current->next != NULL && current->next->data != value)
    {
        current = current->next;
    }

    if (current->next != NULL)
    {
        node *temp = current->next;
        current->next = current->next->next;
        delete temp;
    }
    else
    {
        cout <<" not found" << endl;
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
            cout << "  ";
        }
        current = current->next;
    }
    cout << " " << endl;
}

int main()
{
    insert_at_first(40);
    insert_at_first(30);
    insert_at_first(20);
    insert_at_first(10);


    int value;
    cin >> value;

    delete_node_by_value(value);
    printlist();

    return 0;
}

