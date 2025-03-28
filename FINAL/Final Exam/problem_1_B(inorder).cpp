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

    //shob gula kaj recursively korte hobe;


    Node *insert(Node *current, int value)
    {
        if (current == NULL)
        {
            return new Node(value); //current node faka, noton node create kore return korte hobe.
        }


        if (value < current->data) //choto hoile bam dike insert
        {
            current->left = insert(current->left, value);
        }
        else if (value > current->data)// current er cheye boro hoile dan dike insert
        {
            current->right = insert(current->right, value);
        }
        return current; //return current, structurre;
    }

    bool search(Node *current, int value)
    {
        if (current == NULL)
        {
            return false; //not found
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
    //Question number B
    Node *findMin(Node *current)
    {
        while (current && current->left != NULL)
        {
            current = current->left;
        }
        return current; // shob cheye left er tai smallest;
    }
    Node *deleteNode(Node *current, int value)
    {
        if (current == NULL)
        {
            return NULL;
        }

        if (value < current->data)
        {
            current->left = deleteNode(current->left, value);
        }
        else if (value > current->data)
        {
            current->right = deleteNode(current->right, value);
        }
        else
        {
            //1: no child
            if (current->left == NULL && current->right == NULL)
            {
                delete current;
                return NULL;
            }
            // 2: right child
            else if (current->left == NULL)
            {
                Node *temp = current->right;
                delete current;
                return temp;
            }
            // 3: left child 
            else if (current->right == NULL)
            {
                Node *temp = current->left;
                delete current;
                return temp;
            }
            // 4: 2 child
            else
            {
                Node *temp = findMin(current->right); //right diker minimumm
                current->data = temp->data;           // copy 
                current->right = deleteNode(current->right, temp->data); // delete minimum 
            }
            
        }
        return current;
    }
    void inorder(Node *current)
    {
        if (current != NULL)
        {
            inorder(current->left);
            cout << current->data << " ";
            inorder(current->right);
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
    //inorder before delete
    b.inorder(b.root);
    cout << endl;

    int deleteValue;
    cin >> deleteValue;

    b.root = b.deleteNode(b.root, deleteValue);

    //after delete
    b.inorder(b.root);
    cout << endl;

    return 0;
}
