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

      
    }
    
    void search(int elemnt, Node *&parent, Node *&currentNode)
    {
        // this function searches the currentNode of the specified node as well as the current Node of its parent
        currentNode = ROOT;
        parent = nullptr;
        while ((currentNode != nullptr) && (currentNode->info != element))
        {
            parent = currentNode;
            if (element < currentNode->info)
                currentNode = currentNode->leftchild;
            else 
                currentNode = currentNode->rightchild;
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


    