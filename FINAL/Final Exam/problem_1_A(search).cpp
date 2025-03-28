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
        root = NULL; // initial
    }

    // shob gula kaj recursively korte hobe;

    Node *insert(Node *current, int value)
    {
        if (current == NULL)
        {
            return new Node(value); // current node faka, noton node create kore return korte hobe.
        }

        if (value < current->data) // choto hoile bam dike insert
        {
            current->left = insert(current->left, value);
        }
        else if (value > current->data) // current er cheye boro hoile dan dike insert
        {
            current->right = insert(current->right, value);
        }
        return current; // return current, structurre;
    }

    bool search(Node *current, int value)
    {
        if (current == NULL)
        {
            return false; // not found
        }
        if (value == current->data)
        {
            return true; // found
        }
        else if (value < current->data)
        {
            return search(current->left, value); // left dike search
        }
        else
        {
            return search(current->right, value); // right dike search
        }
    }
};

int main()
{
    BST b;

    b.root = b.insert(b.root, 50);
    b.insert(b.root, 30);
    b.insert(b.root, 70);
    b.insert(b.root, 20);
    b.insert(b.root, 40);
    b.insert(b.root, 60);
    b.insert(b.root, 80);

    int searchValues[] = {40, 90};
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
