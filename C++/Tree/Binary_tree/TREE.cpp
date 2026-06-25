#include "TREE.hpp"

TREE::Node::Node()
{
    this->data = 0;
    this->left = this->right = nullptr;
};

TREE::Node *TREE::Node::createNode(int data) {
};

TREE::Node::Node(int data)
{
    this->data = data;
    this->left = this->right = nullptr;
};

TREE::TREE()
{
    this->size = this->height = 0;
    this->root = nullptr;
};

TREE::TREE(int data)
{
    this->size = this->height = 1;
    this->root = Node::createNode(data);
};