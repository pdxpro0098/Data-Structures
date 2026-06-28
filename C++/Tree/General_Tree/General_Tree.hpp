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
        static Node *createNode(int);
    };

    int _size;
    Node *root;
    void _printTree(Node *);

    TREE(int);
    void addChild(Node *,int);
    void printTree();
};
