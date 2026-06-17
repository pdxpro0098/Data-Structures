#include "QUEUE.hpp"

QUEUE::QUEUE()
{
    front = -1;
    rear = -1;
    length = 0;
    capacity = 2;
    array = new int[capacity];
}

QUEUE::QUEUE(int size)
{
    front = -1;
    rear = -1;
    length = 0;
    capacity = 2;
    array = new int[size];
}

int QUEUE::peek()
{
    return array[front];
}

int QUEUE::back()
{
    return array[rear];
}

void QUEUE::enqueue(int)
{
}

void QUEUE::dequeue()
{
}

int QUEUE::size()
{
    return length;
}

bool QUEUE::isEmpty()
{
    return length == 0;
}

void QUEUE::resize()
{
}
