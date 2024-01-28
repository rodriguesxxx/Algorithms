import models.LinkedList;
public class Main {

    public static void main(String[] args ){
        LinkedList linkedList = new LinkedList();
        linkedList.add("Daniel Rodrigues");
        linkedList.add(12);
        linkedList.add(2.3);
        System.out.println(linkedList.lenght());
        System.out.println(linkedList.getAll());


    }
}
