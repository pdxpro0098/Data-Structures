#include "ARRAY.hpp"

int main()
{
    ARRAY a;

    // a.push_back(1);
    // a.push_back(2);
    // a.push_back(3);
    // a.push_back(4);
    // a.push_back(5);
    // a.push_back(6);
    // a.push_back(7);
    // a.push_back(8);
    // a.push_back(9);
    a.insert(99);
    a.insert(98);
    a.insert(97);
    a.insert(96);
    a.insert(95);
    a.insert(94);
    a.insert(93);
    a.printArray();

    return 0;
}
