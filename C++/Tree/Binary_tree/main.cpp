#include "TREE.hpp"

int main()
{
    TREE t;
    t.addChild(12);
    t.addChild(14);
    t.addChild(15);
    t.addChild(16);
    t.addChild(18);

    std::cout << t.height();
    return 0;
}
