package Java.Tree.Binary_Tree;

public class BST {

    private class Node {
        int data;
        Node left;
        Node right;

        Node(int value) {
            this.data = value;
            this.left = null;
            this.right = null;
        }
    }

    private Node root;
    private int _size;

    BST(int value) {
        this.root = new Node(value);
    }

    public void addChild(int value) {
        Node newNode = new Node(value);

        if (this.root != null) {
            this.root = newNode;
            this._size++;
            return;
        }

        Node curr = this.root;
        Node prev = null;

        while (curr != null) {
            prev = curr;
            if (curr.data == value) {
                return;
            } else if (curr.data > value) {
                curr = curr.left;
            } else {
                curr = curr.right;
            }
        }

        if (prev.data > value) {
            prev.left = newNode;
        } else {
            prev.right = newNode;
        }
        this._size++;
    }

    private Node getSuccessor(Node root) {
        Node temp = root.right;

        while (temp.left != null) {
            temp = temp.left;
        }
        return temp;
    }

    private Node removeChild(Node root, int key) {
        if (root == null) {
            return null;
        }

        if (key < root.data) {
            root.left = removeChild(root.left, key);
        } else if (key > root.data) {
            root.right = removeChild(root.right, key);
        } else {
            if (root.left == null) {
                Node temp = root.right;
                return temp;
            }
            if (root.right == null) {
                Node temp = root.left;
                return temp;
            }

            Node predecessor = getSuccessor(root);
            root.data = predecessor.data;
            root.left = removeChild(root.left, predecessor.data);
        }
        return root;
    }

    public void removeChild(int value) {
        if (this.root == null)
            return;

        if (search(value)) {
            this.root = removeChild(this.root, value);
            this._size--;
        }
    }

    void preOrder() {

    }

    void inOrder() {

    }

    void postOrder() {

    }

    boolean search(int value) {

        return true;
    }

    int size() {

        return 1;
    }

    int height() {

        return 1;
    }
}
/*
 * 
 * Node _removeChild(Node , int);
 * void _preOrder(Node );
 * void _inOrder(Node );
 * void _postOrder(Node );
 * Node _search(Node , int);
 * int _height(Node );
 */