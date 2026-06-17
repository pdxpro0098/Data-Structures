#include <iostream>

class QUEUE
{
private:
    int front;
    int rear;
    int length;
    int capacity;
    void resize();

public:
    int *array;
    QUEUE();
    QUEUE(int);
    int peek();
    int back();
    void enqueue(int);
    void dequeue();
    int size();
    bool isEmpty();
};