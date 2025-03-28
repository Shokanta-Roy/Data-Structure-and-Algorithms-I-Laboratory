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

    // Find the minimum value in a subtree
    Node *findMin(Node *current)
    {
        while (current && current->left != NULL)
        {
            current = current->left;
        }
        return current;
    }

    // Recursive deletion in BST
    Node *deleteNode(Node *current, int value)
    {
        if (current == NULL)
        {
            return NULL; // Node not found
        }

        if (value < current->data)
        {
            // Search in the left subtree
            current->left = deleteNode(current->left, value);
        }
        else if (value > current->data)
        {
            // Search in the right subtree
            current->right = deleteNode(current->right, value);
        }
        else
        {
            // Node to be deleted found
            if (current->left == NULL && current->right == NULL)
            {
                // Case 1: Node with no children (leaf node)
                delete current;
                return NULL;
            }
            else if (current->left == NULL)
            {
                // Case 2: Node with only right child
                Node *temp = current->right;
                delete current;
                return temp;
            }
            else if (current->right == NULL)
            {
                // Case 2: Node with only left child
                Node *temp = current->left;
                delete current;
                return temp;
            }
            else
            {
                // Case 3: Node with two children
                // Find the inorder successor (minimum value in the right subtree)
                Node *temp = findMin(current->right);
                current->data = temp->data; // Copy the successor's value
                // Delete the successor
                current->right = deleteNode(current->right, temp->data);
            }
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

    cout << "Inorder Traversal before Deletion: ";
    b.inorder(b.root);
    cout << "NULL" << endl;

    // Delete node 70
    b.root = b.deleteNode(b.root, 70);

    cout << "Inorder Traversal after Deletion: ";
    b.inorder(b.root);
    cout << "NULL" << endl;

    return 0;
}
