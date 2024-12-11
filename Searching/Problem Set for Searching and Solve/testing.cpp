#include <bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node* next;
};

node* head = NULL;

// Function to insert a node at the beginning of the list
void insert_at_first(int value)
{
    node* newnode = new node();
    newnode->data = value;
    newnode->next = head;
    head = newnode;
}

// Function to print the linked list
void printlist()
{
    node* current = head;
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
            cout << " → "; // Print the arrow between nodes
        }
        current = current->next;
    }
    cout << " → NULL" << endl; // Print NULL at the end
}

// Function to remove duplicates from a sorted linked list
void remove_duplicates()
{
    if (head == NULL) return;  // If the list is empty, there's nothing to do.

    node* current = head;

    // Traverse the list and remove duplicates
    while (current != NULL && current->next != NULL)
    {
        if (current->data == current->next->data)
        {
            node* temp = current->next;
            current->next = current->next->next;  // Skip the duplicate node
            delete temp;  // Free the memory of the duplicate node
        }
        else
        {
            current = current->next;  // Move to the next node if no duplicate
        }
    }
}

int main()
{
    // Insert elements into the sorted list
    insert_at_first(40);
    insert_at_first(30);
    insert_at_first(30);
    insert_at_first(20);
    insert_at_first(10);
    insert_at_first(10);

    // Print the original list
    cout << "Original List: ";
    printlist();

    // Remove duplicates
    remove_duplicates();

    // Print the modified list after removing duplicates
    cout << "Modified List: ";
    printlist();

    return 0;
}
