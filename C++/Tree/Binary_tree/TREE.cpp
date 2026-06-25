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
    this->_size = 0;
    this->root = nullptr;
};

TREE::TREE(int data)
{
    this->_size = 1;
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

void TREE::removeChild(int key)
{
    if (this->root == nullptr)
    {
        return;
    }

    if (this->root->left == nullptr && this->root->right == nullptr)
    {
        if (this->root->data == key)
        {
            delete (this->root);
            this->root = nullptr;
            this->_size--;
        }
        return;
    }

    std::queue<Node *> que;
    que.push(this->root);

    Node *toDelete = nullptr;
    Node *lastNode = nullptr;

    while (!que.empty())
    {
        lastNode = que.front();
        que.pop();

        if (lastNode->data == key)
        {
            toDelete = lastNode;
        }

        if (lastNode->left)
        {
            que.push(lastNode->left);
        }

        if (lastNode->right)
        {
            que.push(lastNode->right);
        }
    }

    if (toDelete)
    {
        toDelete->data = lastNode->data;
        removeChild();
    }
}

void TREE::removeChild()
{
    if (this->root == nullptr)
    {
        return;
    }

    if (this->root->left == nullptr && this->root->right == nullptr)
    {
        delete (this->root);
        this->root = nullptr;
        this->_size--;
        return;
    }

    std::queue<Node *> que;
    que.push(this->root);

    Node *toDelete = nullptr;
    Node *parent = nullptr;

    while (!que.empty())
    {
        toDelete = que.front();
        que.pop();

        if (toDelete->left)
        {
            parent = toDelete;
            que.push(toDelete->left);
        }

        if (toDelete->right)
        {
            parent = toDelete;
            que.push(toDelete->right);
        }
    }

    if (parent->right == toDelete)
    {
        parent->right = nullptr;
    }
    else
    {
        parent->left = nullptr;
    }

    this->_size--;
    delete (toDelete);
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

TREE::Node *TREE::_search(Node *root, int key)
{
    if (root == nullptr)
    {
        return nullptr;
    }

    if (root->data == key)
    {
        return root;
    }

    Node *temp = _search(root->left, key);

    if (temp != nullptr)
    {
        return temp;
    }

    return _search(root->right, key);
}

bool TREE::search(int key)
{
    return _search(this->root, key);
}

int TREE::size()
{
    return this->_size;
}

int TREE::_height(Node *root)
{
    if (!root)
        return 0;

    auto max = [](int leftH, int rightH) -> int
    {
        if (leftH > rightH)
            return leftH;
        return rightH;
    };

    return 1 + max(_height(root->left), _height(root->right));
}

int TREE::height()
{
    return _height(this->root);
}
