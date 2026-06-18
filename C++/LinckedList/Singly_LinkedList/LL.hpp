#include <iostream>

class LLIST
{
private:
    int length;
    LLIST *head;

    class Node
    {
    private:
        Node *next;
        int data;

    public:
        Node(int);
    };

public:
    LLIST(int);
    LLIST();
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