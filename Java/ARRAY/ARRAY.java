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

    public int size() {
        return this.length;
    }

    public boolean isEmpty() {
        return length == 0;
    }

    public boolean isFull() {
        return length == capacity;
    }


}

/*
 * void ARRAY_init(ARRAY *array);
 * int ARRAY_Size(ARRAY *array);
 * void insert_back(ARRAY *array, int value);
 * void insert_front(ARRAY *array, int value);
 * void delete_back(ARRAY *array);
 * void delete_front(ARRAY *array);
 * int insert_At(ARRAY *array, int index, int value);
 * int delete_At(ARRAY *array, int index);
 * void ARRAY_empty(ARRAY *array);
 * void ARRAY_free(ARRAY *array);
 */