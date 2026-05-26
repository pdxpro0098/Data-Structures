#include <iostream>

class STACK
{
private:
    int *array;
    int top;
    int length;
    int capacity;
    void resize();

public:
    STACK();
    int top();
    int size();
    void push(int);
    void pop();
    bool empty();
};