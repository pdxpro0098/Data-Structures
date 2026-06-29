package Java.ARRAY;

class ARRAY {
    public int[] arr;
    public int length;
    public int capacity;

    ARRAY() {
        this.capacity = 5;
        this.arr = new int[this.capacity];
        this.length = 0;
    }

    ARRAY(int capacity) {
        this.capacity = capacity;
        this.arr = new int[capacity];
        this.length = 0;
    }

    public void reSize() {
        this.capacity += 2;
        int[] newArr = new int[this.capacity];

        for (int i = 0; i < arr.length; i++) {
            newArr[i] = arr[i];
        }
        arr = newArr;
    }

    public int size() {
        return this.length;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public boolean isFull() {
        return length == capacity;
    }

    public void insert_front(int value) {
        if (isFull())
            reSize();

        for (int i = this.length; i > 0; i--) {
            arr[i] = arr[i - 1];
        }

        arr[0] = value;
        this.length++;
    }

    public void insert_back(int value) {
        if (isFull())
            reSize();

        arr[length] = value;
        this.length++;
    }

    public void delete_back() {
        if (isEmpty())
            return;

        this.length--;
    }

    public void delete_front() {
        if (isEmpty())
            return;

        for (int i = 0; i < arr.length; i++) {
            arr[i] = arr[i + 1];
        }

        this.length--;
    }

}

/*
 * int insert_At(ARRAY *array, int index, int value);
 * int delete_At(ARRAY *array, int index);
 * void ARRAY_free(ARRAY *array);
 */