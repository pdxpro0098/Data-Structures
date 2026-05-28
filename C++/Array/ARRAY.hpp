#include <iostream>

class ARRAY
{
private:
    int *array;
    int length;
    int capacity;
    void resize();

public:
    ARRAY();
    ARRAY(int);
    void printArray();
    void push_front(int);
    void pop_front();
    void push_back(int);
    void pop_back();
    int at(int);
    bool empty();
    int size();
    int max_size();
    int front();
    int back();
};
