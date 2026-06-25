#include "TREE.hpp"

int main()
{
    TREE t;
    t.addChild(12);
    t.addChild(14);
    t.addChild(15);
    t.addChild(16);
    t.addChild(18);
    t.preOrder();
    t.removeChild(12);
    t.preOrder();
    // std::cout << t.search(12)->left->data;
    return 0;
}
