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
        static Node *createNode(int);
    };

    int _size;
    Node *root;

    void _preOrder(Node *);
    void _inOrder(Node *);
    void _postOrder(Node *);
    Node *_search(Node *, int);
    int _height(Node *);

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