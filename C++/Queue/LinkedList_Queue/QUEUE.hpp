#include <iostream>

class QUEUE
{
private:
    class Node
    {
    private:
        Node *next;
        int data;

    public:
        Node();
        static Node *create_node(int);
    };

    Node *front;
    Node *rear;
    int length;

public:
    QUEUE();
    QUEUE(int);
    void enqueue(int);
    void dequeue();
    int peek();
    int size();
    bool isEmpty();
};