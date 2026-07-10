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
    private int size;

    BST(int value) {
        this.root = new Node(value);
    }

    public void addChild(int value) {
        Node newNode = new Node(value);

        if (this.root != null) {
            this.root = newNode;
            this.size++;
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
        this.size++;
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
            this.size--;
        }
    }

    private void preOrder(Node root) {
        if (root != null) {
            System.out.println(root.data + " ");
            preOrder(root.left);
            preOrder(root.right);
        }
    }

    public void preOrder() {
        preOrder(this.root);
    }

    private void inOrder(Node root) {
        if (root != null) {
            inOrder(root.left);
            System.out.println(root.data + " ");
            inOrder(root.right);
        }
    }

    public void inOrder() {
        inOrder(this.root);
    }

    private void postOrder(Node root) {
        if (root != null) {
            postOrder(root.left);
            postOrder(root.right);
            System.out.println(root.data + " ");
        }
    }

    public void postOrder() {
        postOrder(this.root);
    }

    Node _search(Node root, int key) {
        if (root == null || root.data == key) {
            return root;
        } else if (root.data > key) {
            return _search(root.left, key);
        } else {
            return _search(root.right, key);
        }
    }

    boolean search(int key) {
        return _search(this.root, key) != null;
    }

    int size() {
        return this.size;
    }

    private int max(int leftH, int rightH) {

        if (leftH > rightH)
            return leftH;
        return rightH;
    }

    private int _height(Node root) {
        if (this.root == null)
            return 0;

        return 1 + max(_height(root.left), _height(root.right));
    }

    public int height() {

        return _height(this.root);
    }
}