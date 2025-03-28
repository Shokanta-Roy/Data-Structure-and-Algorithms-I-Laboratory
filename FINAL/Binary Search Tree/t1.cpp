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

    // Recursive search in BST
    bool search(Node *current, int value)
    {
        if (current == NULL)
        {
            return false; // Not found
        }
        if (value == current->data)
        {
            return true; // Found
        }
        else if (value < current->data)
        {
            return search(current->left, value); // Search in left subtree
        }
        else
        {
            return search(current->right, value); // Search in right subtree
        }
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

    // Search for values
    int searchValues[] = {40, 90};
    cout << "Search Result:" << endl;
    for (int value : searchValues)
    {
        if (b.search(b.root, value))
        {
            cout << value << ": Found" << endl;
        }
        else
        {
            cout << value << ": Not Found" << endl;
        }
    }

    return 0;
}
