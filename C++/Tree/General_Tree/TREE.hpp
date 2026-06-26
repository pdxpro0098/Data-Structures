#include <iostream>
#include <vector>

class TREE
{
public:
    class Node
    {
    public:
        int data;
        std::vector<Node *> children;

        Node(int);
        Node();
        static Node *createNode(int data);
    };

    int _size;
    Node *root;
    void _printTree(Node *root);

    TREE(int);
    void addChild(Node *,int);
    void printTree();
};
