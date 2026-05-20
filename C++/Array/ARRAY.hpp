#include <iostream>
#include <cstdio>

class ARRAY
{
private:
    int *array;

public:
    ARRAY(int);
    void init()
    {
        std::cout << "array init...";
    }

    void printArray();
};
