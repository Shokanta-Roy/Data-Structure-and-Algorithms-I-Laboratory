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

    // Find the minimum value in the BST
    Node *findMin(Node *current)
    {
        if (current == NULL)
        {
            return NULL; // Tree is empty
        }
        if (current->left == NULL)
        {
            return current; // Minimum value found
        }
        return findMin(current->left);
    }

    // Find the maximum value in the BST
    Node *findMax(Node *current)
    {
        if (current == NULL)
        {
            return NULL; // Tree is empty
        }
        if (current->right == NULL)
        {
            return current; // Maximum value found
        }
        return findMax(current->right);
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

    // Find minimum value
    Node *minNode = b.findMin(b.root);
    if (minNode)
    {
        cout << "Minimum Value: " << minNode->data << endl;
    }
    else
    {
        cout << "Tree is empty!" << endl;
    }

    // Find maximum value
    Node *maxNode = b.findMax(b.root);
    if (maxNode)
    {
        cout << "Maximum Value: " << maxNode->data << endl;
    }
    else
    {
        cout << "Tree is empty!" << endl;
    }

    return 0;
}
