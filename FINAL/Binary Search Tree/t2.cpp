#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};

class BST
{
public:
    Node *root;

    BST()
    {
        root = NULL;
    }

    // Recursive insertion in BST
    Node *insert(Node *current, int value)
    {
        if (current == NULL)
        {
            return new Node(value);
        }
        if (value < current->data)
        {
            current->left = insert(current->left, value);
        }
        else if (value > current->data)
        {
            current->right = insert(current->right, value);
        }
        return current;
    }

    // Inorder traversal (Left → Root → Right)
    void inorder(Node *current)
    {
        if (current == NULL)
            return;

        inorder(current->left);
        cout << current->data << " → ";
        inorder(current->right);
    }

    // Preorder traversal (Root → Left → Right)
    void preorder(Node *current)
    {
        if (current == NULL)
            return;

        cout << current->data << " → ";
        preorder(current->left);
        preorder(current->right);
    }

    // Postorder traversal (Left → Right → Root)
    void postorder(Node *current)
    {
        if (current == NULL)
            return;

        postorder(current->left);
        postorder(current->right);
        cout << current->data << " → ";
    }
};

int main()
{
    BST b;

    // Insert values into BST
    b.root = b.insert(b.root, 50);
    b.insert(b.root, 30);
    b.insert(b.root, 70);
    b.insert(b.root, 20);
    b.insert(b.root, 40);
    b.insert(b.root, 60);
    b.insert(b.root, 80);

    // Perform traversals
    cout << "Inorder Traversal: ";
    b.inorder(b.root);
    cout << "NULL" << endl;

    cout << "Preorder Traversal: ";
    b.preorder(b.root);
    cout << "NULL" << endl;

    cout << "Postorder Traversal: ";
    b.postorder(b.root);
    cout << "NULL" << endl;

    return 0;
}
