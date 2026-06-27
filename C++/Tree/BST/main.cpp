#include "BST.hpp"

int main()
{
    BST t(77);
    t.addChild(12);
    t.addChild(14);
    t.addChild(7);
    t.addChild(3);
    t.addChild(8);

    t.preOrder();
    return 0;
}
