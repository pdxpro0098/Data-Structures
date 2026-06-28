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

BST::Node *BST::getSuccessor(BST::Node *root)
{
    Node *temp = root->right;

    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

BST::Node *BST::_removeChild(BST::Node *root, int key)
{
    if (root == nullptr)
        return nullptr;

    if (key < root->data)
    {
        root->left = _removeChild(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = _removeChild(root->right, key);
    }
    else
    {
        if (root->left == nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }

        Node *predecessor = getSuccessor(root);
        root->data = predecessor->data;
        root->left = _removeChild(root->left, predecessor->data);
    }
    return root;
}

void BST::removeChild(int value)
{
    if (this->root == NULL)
        return;

    if (search(value))
    {
        this->root = _removeChild(this->root, value);
        this->_size--;
    }
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

BST::Node *BST::_search(BST::Node *root, int key)
{
    if (root == nullptr || root->data == key)
        return root;

    else if (root->data > key)
        return _search(root->left, key);

    else
        return _search(root->right, key);

    return nullptr;
}

bool BST::search(int key)
{
    return _search(this->root, key) != nullptr;
}

int BST::size()
{
    return this->_size;
}

int BST::height()
{
    return 0;
}

int BST::_height(Node *root)
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

int BST::height()
{
    return _height(this->root);
}
