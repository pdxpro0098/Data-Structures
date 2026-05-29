#include "STACK.hpp"
#include <iostream>

int main()
{
    STACK s;
    s.push(12);
    s.push(13);
    s.push(14);
    s.push(15);
    s.push(16);
    s.pop();
    std::cout << s.top();
    return 0;
}
