#include "QUEUE.hpp"

QUEUE::QUEUE()
{
    front = -1;
    rear = -1;
    length = 0;
    capacity = 10;
    array = new int[capacity];
}

QUEUE::QUEUE(int size)
{
    front = -1;
    rear = -1;
    length = 0;
    capacity = size;
    array = new int[size];
}

int QUEUE::peek()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty";
        return 0;
    }

    return array[front];
}

int QUEUE::back()
{
    if (isEmpty())
    {
        std::cout << "Queue is Empty";
        return 0;
    }
    return array[rear];
}

void QUEUE::enqueue(int value)
{
    if (length == capacity)
    {
        resize();
    }

    if (front == -1 && rear == -1)
    {
        front++;
        rear++;
    }
    else
    {
        rear = (rear + 1) % capacity;
    }
    length++;
    array[rear] = value;
}

void QUEUE::dequeue()
{
    if (isEmpty())
        return;

    if (length == 1)
    {
        front = -1;
        rear = -1;
        length = 0;
    }
    else
    {
        front = (front + 1) % capacity;
        length--;
    }
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
    int *newArray = new int[capacity + 2];

    for (int i = 0; i < length; i++)
    {
        newArray[i] = array[(front + i) % capacity];
    }

    delete[] array;

    array = newArray;
    capacity += 2;
    front = 0;
    rear = length - 1;
}

QUEUE::~QUEUE()
{
    delete[] array;
}
