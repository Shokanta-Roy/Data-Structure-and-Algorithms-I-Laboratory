#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    node *next;
};
node *head=NULL;

void insert_at_last(int value)
{
    node *newnode = new node();
    newnode ->data=value;
    newnode ->next=NULL;
    if (head==NULL)
    {
        head=newnode;
    }
    else
    {
        node* current=head;
        while (current ->next != NULL)
        {
            current=current ->next;
        }
        current ->next=newnode;
    }
}
void insert_at_first(int value)
{
    node* newnode= new node();
    newnode-> data=value;
    newnode->next=head;
    head=newnode;
}
void insert_anywhere(int target, int value)
{
    node *newnode=new node();
    newnode->data=value;
    node *current=head;
    while (current != NULL && current -> data != target)
    {
        current=current->next;
    }
    newnode ->next=current->next;
    current->next=newnode;
}
void delete_first()
{
    if (head==NULL)
    {
        cout<<"empty"<<endl;
        return;
    }
    node *temp=head;
    head= head->next;
    delete temp;
    
}
void delete_last()
{
    if (head==NULL)
    {
        cout<<"empty"<<endl;
        return;
    }
    if (head->next==NULL)
    {
        delete head;
        head=NULL;
        return;
    }
    
    node *current=head;
    node *previous=NULL;
    while (current->next->next != NULL)
    {
        current=current->next;
    }
    delete current->next;
    current->next = NULL;
    
}
void delete_anywher(int value)
{
    if(head==NULL)
    {
        cout<<"Empty"<<endl;
        return;
    }
    if (head->data=value)
    {
        node *temp=head;
        head=head->next;
        delete temp;
        return;
    }
    
}
void printlist()
{
    node* current=head;
    while (current != NULL)
    {
        cout<<current->data<<endl;
        current=current-> next;
    }

}

int main()
{
    insert_at_last(10);
    insert_at_last(20);
    insert_at_first(100);
    insert_at_first(200);
    printlist();

    return 0;
}
