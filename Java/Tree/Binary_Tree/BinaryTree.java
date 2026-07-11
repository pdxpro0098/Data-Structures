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

    public void removeChild(int value) {

    }

    public void removeChild() {

    }

    public void preOrder() {

    }

    public void inOrder() {

    }

    public void postOrder() {

    }

    public boolean search() {
        return true;
    }

    public int size() {
        return 1;
    }

    public int height() {
        return 1;
    }

}