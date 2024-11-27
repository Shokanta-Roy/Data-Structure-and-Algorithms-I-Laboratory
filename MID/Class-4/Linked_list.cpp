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

    return 0;
}
