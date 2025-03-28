#include<iostream>
using namespace std;

struct Node
{
    int data;
    Node* left;
    Node* right;

    Node(int value)
    {
        data=value;
        left=NULL;
        right=NULL;
    }
};


class BST
{
public:
    Node* root;

    BST()
    {
        root=NULL;
    }

    Node* insert(Node* current, int value)
    {
        if(current==NULL)
        {
            return new Node(value);
        }
        if(value<current->data)
        {
            current->left=insert(current->left, value);
        }

        if(value>current->data)
        {
            current->right= insert(current->right, value);
        }

        return current;
    }


    void inorder(Node* current)
    {
        if(current==NULL)
            return;

        inorder(current->left);
        cout<<current->data<<" ";
        inorder(current->right);

    }

    void preorder(Node* current)
    {
        if(current==NULL)
            return;

        cout<<current->data<<" ";

        preorder(current->left);

        preorder(current->right);

    }

    void postorder(Node* current)
    {
        if(current==NULL)
            return;



        postorder(current->left);

        postorder(current->right);
        cout<<current->data<<" ";

    }

    Node* findMin(Node* current)
    {
        while(current && current->left!=NULL)
        {
            current=current->left;
        }

        return current;
    }


    Node* findMax(Node* current)
    {
        while(current && current->right!=NULL)
        {
            current=current->right;
        }

        return current;
    }

};


int main()
{
    BST b;
    b.root= b.insert(b.root, 15);
    b.insert(b.root, 13);
    b.insert(b.root, 12);
    b.insert(b.root, 17);
    b.insert(b.root, 14);
    b.insert(b.root, 16);
    b.insert(b.root, 18);

    b.inorder(b.root);


    cout<<endl;
    b.preorder(b.root);
    cout<<endl;
    b.postorder(b.root);
    cout<<endl;

    Node* minNode=b.findMin(b.root);
    cout<<minNode->data<<endl;

    Node* maxNode=b.findMax(b.root);
    cout<<maxNode->data<<endl;


}



