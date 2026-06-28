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
        static Node *create_node(int);
    };

    Node *head;
    int length;

public:
    STACK();
    STACK(int);
    void push(int);
    void pop();
    int top();
    int size();
    bool empty();
};