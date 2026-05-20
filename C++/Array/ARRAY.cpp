#include "ARRAY.hpp"

ARRAY::ARRAY(int a)
{
    int *array = new int[10];
};

void ARRAY::printArray()
{
    for (int i = 0; i < 10; i++)
    {
        std::cout << array[i] << std::endl;
    }
}