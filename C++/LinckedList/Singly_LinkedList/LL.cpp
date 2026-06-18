#include "LL.hpp"

LLIST::Node::Node()
{
    this->data = 0;
    this->next = nullptr;
};

LLIST::Node *LLIST::Node::create_node(int value)
{
    Node *newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    return newNode;
};

LLIST::LLIST()
{
    head = nullptr;
    length = 0;
}

LLIST::LLIST(int data)
{
    this->head = Node::create_node(data);
    length = 1;
}

void LLIST::push_front(int value)
{
    Node *newNode = Node::create_node(value);

    if (this->head == nullptr)
    {
        this->head = newNode;
    }
    else
    {
        newNode->next = this->head;
        this->head = newNode;
    }

    this->length++;
}

void LLIST::push_back(int value)
{
    Node *newNode = Node::create_node(value);

    if (this->head == nullptr)
    {
        head = newNode;
    }
    else
    {
        Node *temp = this->head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        temp->next = newNode;
    }
    this->length++;
}

void LLIST::pop_front()
{
    if (this->head == nullptr)
        return;

    Node *temp = this->head;
    this->head = this->head->next;
    length--;
    delete (temp);
}

void LLIST::pop_back()
{
    if (this->head == nullptr)
        return;

    if (this->head->next == nullptr)
    {
        delete (this->head);
        this->head = nullptr;
    }
    else
    {
        Node *temp = this->head;
        while (temp->next->next != nullptr)
        {
            temp = temp->next;
        }
        delete (temp->next);
        temp->next = nullptr;
    }
    length--;
}

int LLIST::front()
{
    if (this->head != nullptr)
    {
        return this->head->data;
    }
    else
    {
        return -1;
    }
}

int LLIST::back()
{
    if (this->head != nullptr)
    {
        Node *temp = this->head;
        while (temp->next != nullptr)
        {
            temp = temp->next;
        }
        return temp->data;
    }
    else
    {
        return -1;
    }
}

int LLIST::size()
{
    return this->length;
}

int LLIST::is_empty()
{
    return this->length == 0;
}
