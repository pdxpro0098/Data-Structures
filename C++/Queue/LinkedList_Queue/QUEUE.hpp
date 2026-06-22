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
        Node(int);
    };

    Node *head;
    int length;
    int front;
    int rear;

public:
    QUEUE();
    QUEUE(int);
    void enqueue(int);
    void dequeue();
    int peek();
    int size();
    bool isEmpty();
};