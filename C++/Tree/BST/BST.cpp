#include "BST.hpp"

BST::Node::Node()
{
    this->data = 0;
    this->left = this->right = nullptr;
}

BST::Node::Node(int value)
{
    this->data = value;
    this->left = this->right = nullptr;
}

BST::Node *BST::Node::createNode(int value)
{
    Node *newNode = new Node(value);
    return newNode;
}

BST::BST()
{
    this->_size = 0;
    this->root = nullptr;
}

BST::BST(int value)
{
    this->_size = 1;
    this->root = Node::createNode(value);
}