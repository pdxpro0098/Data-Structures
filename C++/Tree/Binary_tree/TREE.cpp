#include "TREE.hpp"

TREE::TREE()
{
    this->data = 0;
    this->left = this->right = nullptr;
    this->size = 0;
}

TREE::TREE(int value)
{
    this->data = value;
    this->left = this->right = nullptr;
    this->size = 0;
}

TREE *TREE::create_root(int value)
{
    TREE *newRoot = new TREE();
    newRoot->data = value;
}