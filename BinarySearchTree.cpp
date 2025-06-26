#include <iostream>
 using namespace std;

 
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