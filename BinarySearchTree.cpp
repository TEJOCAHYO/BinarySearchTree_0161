#include <iostream>
 using namespace std;

 class Node
 {
public: 
    int info;
    Node*leftchild;
    Node*rightchild;

    // Constructor for the node class
    Node()
    {
        leftchild = nullptr; // Initialize left child to null
        rightchild = nullptr; // Intialize right child to null
    }
 };
 
 class BinaryTree
 {
    Node*ROOT;

    BinarytTree()
    {
        ROOT = nullptr; // Intializing ROOT to null 
    }

    void insert()
    {
        int x;
        cout << "Masukkan nilai; ";
        cin >> x;

        // Step 1; Allocate memory for the new node
        Node*newNode = new Node();

        // step 2:Assign value to the data field of new node
        newNode->info = x;

        // step 3: Make the lift and right child of the new node point to NULL
        newNode->leftchild = nullptr;
        newNode->rightchild = nullptr;

        // step 4: Locate the node which will be the parent of the node to be inserted
        Node *parent = nullptr;
        Node *currentNode = nullptr;
        search(x, parent, currentNode);

        // step 5: If parent is NULL (Tree is empty)
        if (parent == nullptr)
        {
            // 5a: mark the new node as ROOT
            ROOT = newNode;

            // 5b: Exit
            return;
        }
        // step 6: If the value in the data field of the node is less than that of parents
        if (x <parent->info)
        {
            // 6a : Make the left child of parent point to the new node
            parent->leftchild = newNode;

            // 6b : Exit
            return;
        }
        // step 7 : If the value in the data field of the new node is greater than that of the parent
        else if (x < parent->info)
        {
            // 7a : Make the right child of the parent point to the new node
            parent->rightchild = newNode;

            // 7b : Exit
            return;
        }
    }
    
    

    void inorder(Node *ptr)
    {
        if (isempty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;
    inorder(ptr->leftchild);
    cout << ptr->info<<" "; // parent
    inorder(ptr->rightchild);
    }

    void preorder(Node *ptr)
    {
        if (isempty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;
    cout << ptr->info<<" "; // parent
    preorder(ptr->leftchild);
    preorder(ptr->rightchild);
    }

    void posrder(Node *ptr)
    {
        if (isempty())
        {
            cout << "Tree is empty" << endl;
            return;
        }
        if (ptr == nullptr)
        return;
    posorder(ptr->leftchild);
    posorder(ptr->rightchild);
    cout << ptr->info<<" "; // parent
    }

    bool isempty()
    {
    // checks if the tree is empty
    return ROOT == nullptr;
    }

 };

 int main()
 {
    BinaryTree x;
    while (true)
    {
        cout << "\nMenu" << endl;
        cout << "1. Implement insert operation" << endl;
        cout << "2. Perform inorder traversal" << endl;
        cout << "3. Perform preorder traversal" << endl;
        cout << "4. Perform postorder traversal" << endl;
        cout << "5. Exit" << endl;
        cout << "\nEnter your choice (1-5) : ";

        char ch;
        cin >> ch;
        cout << endl;

        switch (ch)
        {
        case '1':
        {
            x.insert();
            break;
        }
        case '2':
        {
            x.inorder(x.ROOT);
            break;
        }
        case '3':
        {

            x.preorder(x.ROOT);
            break;
        }
        case '4':
        {

            x.postorder(x.ROOT);
            break;
        }
        case '5':
            return 0;
        default:
        {
            cout << "Invalid option" << endl;
            break;
        }
        }
    }
 }
 
    