#include <iostream>

class LLIST
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

    int length;

public:
    Node *head;
    LLIST();
    LLIST(int);
    void push_front(int);
    void push_back(int);
    void pop_front();
    void pop_back();
    void insert_at(int);
    void remove_at(int);

    int front();
    int back();
    int size();
    int is_empty();
};