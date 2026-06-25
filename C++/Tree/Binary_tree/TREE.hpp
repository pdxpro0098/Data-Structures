#include <iostream>

class TREE
{
private:
    int data;
    int size;
    static TREE *create_node(int);
    TREE *left;
    TREE *right;

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
