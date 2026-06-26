#include <iostream>
#include <vector>

class TREE
{
private:
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
    void _printTree();

public:
    TREE();
    void addChild();
    void removeChild();
    void printTree();
};
