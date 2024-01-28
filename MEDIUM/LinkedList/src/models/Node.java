package models;

class Node<T>{
    private T date;
    private Node next = null;
    
    public Node(T date){
        this.setDate(date);
    }

    public T getDate(){
        return this.date;
    }

    public void setDate(T date){
        this.date = date;
    }

    public Node getNext(){
        return  this.next;
    }
    
    public void setNext(Node next){
        this.next = next;
    }
}