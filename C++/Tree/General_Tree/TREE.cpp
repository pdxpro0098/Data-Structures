#include "TREE.hpp"

TREE::Node::Node()
{
    this->data = 0;
}

TREE::Node::Node(int data)
{
    this->data = data;
}

TREE::Node *TREE::Node::createNode(int data)
{
    Node *newNode = new Node(data);
    return newNode;
}

TREE::TREE(int data)
{
    this->root = Node::createNode(data);
    this->_size = 1;
}

void TREE::addChild(Node *root, int data)
{
    Node *newNode = Node::createNode(data);
    root->children.push_back(newNode);
}

void TREE::_printTree(Node *root)
{
    if (root == nullptr)
        return;

    std::cout << root->data << " ";

    for (Node *child : root->children)
    {
        _printTree(child);
    }
}

void TREE::printTree()
{
    _printTree(this->root);
}
