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

void BST::addChild(int value)
{
    Node *newNode = Node::createNode(value);

    if (!this->root)
    {
        this->root = newNode;
        this->_size++;
        return;
    }

    Node *curr = this->root;
    Node *prev;

    while (curr)
    {
        prev = curr;
        if (curr->data == value)
        {
            delete (newNode);
            return;
        }
        else if (curr->data > value)
        {
            curr = curr->left;
        }
        else
        {
            curr = curr->right;
        }
    }

    if (prev->data > value)
    {
        prev->left = newNode;
    }
    else
    {
        prev->right = newNode;
    }
    this->_size++;
}

void BST::_preOrder(Node *root)
{
    if (root != nullptr)
    {
        std::cout << root->data << " ";
        _preOrder(root->left);
        _preOrder(root->right);
    }
}

void BST::_inOrder(Node *root)
{
    if (root != nullptr)
    {
        _inOrder(root->left);
        std::cout << root->data << " ";
        _inOrder(root->right);
    }
}

void BST::_postOrder(Node *root)
{
    if (root != nullptr)
    {
        _postOrder(root->left);
        _postOrder(root->right);
        std::cout << root->data << " ";
    }
}

void BST::preOrder()
{
    _preOrder(this->root);
}

void BST::inOrder()
{
    _inOrder(this->root);
}

void BST::postOrder()
{
    _postOrder(this->root);
}
