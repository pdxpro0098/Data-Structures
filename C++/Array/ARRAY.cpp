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

void ARRAY::resize()
{
    int *temp = array;
    array = new int[size + 2];
    for (int i = 0; i < length; i++)
    {
        array[i] = temp[i];
    }

    size += 2;
}

void ARRAY::printArray()
{
    for (int i = 0; i < length; i++)
    {
        std::cout << array[i] << std::endl;
    }
}

int ARRAY::insert(int value)
{
    return 0;
}

int ARRAY::remove()
{
    return 0;
}

int ARRAY::push_back(int value)
{
    if (length == size)
    {
        resize();
    }

    array[length] = value;
    length++;
    return 0;
}

int ARRAY::pop_back()
{
    return 0;
}
