#include <iostream>
#include <vector>

class TREE
{
private:
    int data;
    std::vector<TREE> children;
    static TREE *create_node(int);

public:
    TREE();
    void addChild(TREE *node);
    void removeChild(TREE *node);
    void printTree();
};
