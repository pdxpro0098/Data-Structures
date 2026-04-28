#include "TREE.h"

int main()
{
    TREE *t = (TREE *)malloc(sizeof(TREE));
    Node *a1 = createNode(12);
    
    preOrder(t);
    return 0;
}
