package Java.Tree.Binary_Tree;

import java.util.LinkedList;
import java.util.Queue;

public class BinaryTree {

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
    private int _size = 1;

    BinaryTree(int value) {
        this.root = new Node(value);
        this._size = 1;
    }

    public void addChild(int value) {
        Node newNode = new Node(value);
        if (this.root == null) {
            this.root = newNode;
        } else {
            Queue<Node> que = new LinkedList<>();
            que.add(this.root);

            while (!que.isEmpty()) {
                Node temp = que.peek();
                que.poll();

                if (temp.left == null) {
                    temp.left = newNode;
                    break;
                } else {
                    que.add(temp.left);
                }

                if (temp.right == null) {
                    temp.right = newNode;
                    break;
                } else {
                    que.add(temp.right);
                }
            }
        }
        this._size++;
    }

    public void removeChild() {
        if (this.root == null) {
            return;
        }

        if (this.root.left == null && this.root.right == null) {
            this.root = null;
            this._size--;
            return;
        }

        Queue<Node> que = new LinkedList<>();
        que.add(this.root);

        Node toDelete = null;
        Node parent = null;

        while (!que.isEmpty()) {
            toDelete = que.peek();
            que.poll();

            if (toDelete.left != null) {
                parent = toDelete;
                que.add(toDelete.left);
            }

            if (toDelete.right != null) {
                parent = toDelete;
                que.add(toDelete.right);
            }
        }

        if (parent.right == toDelete) {
            parent.right = null;
        } else {
            parent.left = null;
        }

        this._size--;
    }

    private void _preOrder(Node root) {
        if (root != null) {
            System.out.println(root.data + " ");
            _preOrder(root.left);
            _preOrder(root.right);
        }
    }

    private void _inOrder(Node root) {
        if (root != null) {
            _inOrder(root.left);
            System.out.println(root.data + " ");
            _inOrder(root.right);
        }
    }

    private void _postOrder(Node root) {
        if (root != null) {
            _postOrder(root.left);
            _postOrder(root.right);
            System.out.println(root.data + " ");
        }
    }

    public void preOrder() {
        _preOrder(this.root);
    }

    public void inOrder() {
        _inOrder(this.root);
    }

    public void postOrder() {
        _postOrder(this.root);
    }

    private Node _search(Node root, int key) {
        if (root == null) {
            return null;
        }

        if (root.data == key) {
            return root;
        }

        Node temp = _search(root.left, key);

        if (temp != null) {
            return temp;
        }

        return _search(root.right, key);
    }

    public boolean search(int key) {
        return _search(this.root, key) != null;
    }

    public int size() {
        return this._size;
    }

    private int max(int leftH, int rightH) {

        if (leftH > rightH)
            return leftH;
        return rightH;
    }

    private int _height(Node root) {
        if (root == null)
            return 0;

        return 1 + max(_height(root.left), _height(root.right));
    }

    public int height() {
        return _height(root);
    }

}