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

    int size;
    int height;
    Node *root;

public:
    TREE();
    TREE(int);
    void addChild(int);
    void removeChild(int);
    void inOrder();
    void preOrder();
    void postOrder();
    bool search(int);
};
