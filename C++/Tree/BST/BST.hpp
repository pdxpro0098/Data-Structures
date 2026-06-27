#include <iostream>

class BST
{
private:
    class Node
    {
    public:
        int data;
        Node *left;
        Node *right;

        Node();
        Node(int);
        static Node *createNode(int data);
    };

    int _size;
    Node *root;

    void _preOrder(Node *root);
    void _inOrder(Node *root);
    void _postOrder(Node *root);
    Node *_search(Node *root, int);
    int _height(Node *root);

public:
    BST();
    BST(int);
    void addChild(int);
    void removeChild(int);
    void removeChild();
    void preOrder();
    void inOrder();
    void postOrder();
    bool search(int);
    int size();
    int height();
};