#include <iostream>
#include <queue>

class TREE
{
private:
    class Node
    {
    public:
        int data;
        Node *left;
        Node *right;

        Node(int);
        Node();
        static Node *createNode(int data);
    };

    int _size;
    int _height;
    Node *root;

    void _preOrder(Node *root);
    void _inOrder(Node *root);
    void _postOrder(Node *root);

public:
    TREE();
    TREE(int);
    void addChild(int);
    void removeChild(int);
    void preOrder();
    void inOrder();
    void postOrder();
    bool search(int);
    int size();
    int height();
};