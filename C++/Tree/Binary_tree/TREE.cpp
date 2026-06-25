#include "TREE.hpp"

TREE::Node::Node()
{
    this->data = 0;
    this->left = this->right = nullptr;
};

TREE::Node *TREE::Node::createNode(int data)
{
    Node *newNode = new Node();
    newNode->data = data;
    newNode->left = newNode->right = nullptr;
    return newNode;
};

TREE::Node::Node(int data)
{
    this->data = data;
    this->left = this->right = nullptr;
};

TREE::TREE()
{
    this->_size = this->_height = 0;
    this->root = nullptr;
};

TREE::TREE(int data)
{
    this->_size = this->_height = 1;
    this->root = Node::createNode(data);
};

void TREE::addChild(int data)
{
    Node *newNode = Node::createNode(data);
    if (this->root == nullptr)
    {
        this->root = newNode;
    }
    else
    {
        std::queue<Node *> que;
        que.push(this->root);

        while (!que.empty())
        {
            Node *temp = que.front();
            que.pop();

            if (!temp->left)
            {
                temp->left = newNode;
                break;
            }
            else
            {
                que.push(temp->left);
            }

            if (!temp->right)
            {
                temp->right = newNode;
                break;
            }
            else
            {
                que.push(temp->right);
            }
        }
    }

    this->_size++;
}

void TREE::_preOrder(Node *root)
{
    if (root != nullptr)
    {
        std::cout << root->data << " ";
        _preOrder(root->left);
        _preOrder(root->right);
    }
}

void TREE::_inOrder(Node *root)
{
    if (root != nullptr)
    {
        _inOrder(root->left);
        std::cout << root->data << " ";
        _inOrder(root->right);
    }
}

void TREE::_postOrder(Node *root)
{
    if (root != nullptr)
    {
        _postOrder(root->left);
        _postOrder(root->right);
        std::cout << root->data << " ";
    }
}

void TREE::preOrder()
{
    _preOrder(this->root);
}

void TREE::inOrder()
{
    _inOrder(this->root);
}

void TREE::postOrder()
{
    _postOrder(this->root);
}