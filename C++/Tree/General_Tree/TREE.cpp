#include "TREE.hpp"

TREE::Node::Node()
{
    this->data = 0;
    this->children;
}

TREE::Node::Node(int data)
{
    this->data = data;
    this->children;
}

TREE::Node *TREE::Node::createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->children;
    return newNode;
}
