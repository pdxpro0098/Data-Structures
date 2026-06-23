#include "STACK.hpp"

int main()
{
    STACK stk;
    stk.push(12);
    stk.push(13);
    stk.push(14);
    stk.push(24);
    stk.push(25);
    while (!stk.empty())
    {
        std::cout << stk.top() << std::endl;
        stk.pop();
    }

    return 0;
}
