#include "ARRAY.hpp"

ARRAY::ARRAY(int initialSize)
{
    length = 0;
    size = initialSize;
    array = new int[size];
};

ARRAY::ARRAY()
{
    length = 0;
    size = 2;
    array = new int[size];
};

void ARRAY::printArray()
{
    for (int i = 0; i < 12; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int ARRAY::insert(int value)
{
    array[0] = value;
    return 0;
}

int ARRAY::remove()
{
    return 0;
}

int ARRAY::push_back()
{
    return 0;
}

int ARRAY::pop_back()
{
    return 0;
}
