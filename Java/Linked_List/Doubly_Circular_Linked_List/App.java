package Java.Linked_List.Doubly_Circular_Linked_List;

public class App {
    public static void main(String[] args) {

        DCLL list = new DCLL();
        list.push_back(12);
        list.push_back(13);
        list.push_back(15);
        list.push_back(17);
        list.printBackward();
    }
}
