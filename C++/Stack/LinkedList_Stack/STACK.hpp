#include <iostream>

class STACK
{
private:
    class Node
    {
    public:
        Node *next;
        int data;

        Node();
        Node *create_node(int);
    };

    Node *top;
    int length;

public:
    STACK();
    int top();
    int size();
    void push(int);
    void pop();
    bool empty();
};
