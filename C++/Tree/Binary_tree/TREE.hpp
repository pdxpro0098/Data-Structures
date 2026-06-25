#include <iostream>
#include <queue>

class TREE
{
private:
    int data;
    TREE *left;
    TREE *right;
    static int size;
    static TREE *create_root(int);

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
