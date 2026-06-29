package Java.ARRAY;

public class App {
    public static void main(String[] args) {
        ARRAY a = new ARRAY();
        
        a.insert_back(12);
        a.insert_back(14);
        a.insert_back(15);
        a.insert_back(16);
        a.insert_back(17);
        a.insert_back(19);
        a.insert_back(200);
        a.insert_back(201);

        for (int i : a.arr) {
            System.out.println(i);
        }

        System.out.println("len" + a.length);
        System.out.println("cap" + a.capacity);
    }
}