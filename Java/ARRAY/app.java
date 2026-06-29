package Java.ARRAY;

public class App {
    public static void main(String[] args) {
        ARRAY a = new ARRAY();

        a.insert_back(1);
        a.insert_back(2);
        a.insert_back(3);
        a.insert_back(4);
        a.insert_back(5);
        a.insert_back(6);
        a.insert_back(7);
        a.insert_back(8);
        a.insert_back(9);

        a.insert_At(4, 99);
        for (int i : a.arr) {
            System.out.println(i);
        }

        System.out.println("len" + a.length);
        System.out.println("cap" + a.capacity);
    }
}