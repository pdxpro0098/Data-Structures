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
    int top();
    int size();
    void push(int);
    void pop();
    bool empty();
};