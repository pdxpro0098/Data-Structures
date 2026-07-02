package Java.Stack.Array_Stack;

public class Stack {

    private int Top;
    private int length;
    private int capacity;
    private int[] array;

    Stack(int size) {
        this.Top = -1;
        this.length = 0;
        this.capacity = size;
        this.array = new int[size];
    }

    Stack() {
        this.Top = -1;
        this.length = 0;
        this.capacity = 2;
        this.array = new int[2];
    }

    private void resize() {
        int[] temp = array;
        capacity += 2;
        array = new int[capacity];

        for (int i = 0; i < length; i++) {
            array[i] = temp[i];
        }
    }

    public int top() {
        return array[Top];
    }

    public int size() {
        return length;
    }

    public boolean empty() {
        return length == 0;
    }

    public void push(int value) {
        if (length == capacity) {
            resize();
        }
        array[++Top] = value;
        length++;
    }

    public void pop() {
        if (!empty()) {
            Top--;
            length--;
        }
    }
}