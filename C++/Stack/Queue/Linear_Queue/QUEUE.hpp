#include <iostream>

class QUEUE
{
private:
    int front;
    int rear;
    int length;
    int capacity;

public:
    int *array;
    QUEUE();
    QUEUE(int);
    int peek();
    void enqueue(int);
    void dequeue();
    int size();
    bool isEmpty();
};