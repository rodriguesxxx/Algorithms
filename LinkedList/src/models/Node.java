package models;

class Node{
    private Object date;
    private Node next = null;
    
    public Node(Object date){
        this.setDate(date);
    }

    public Object getDate(){
        return this.date;
    }

    public void setDate(Object date){
        this.date = date;
    }

    public Node getNext(){
        return  this.next;
    }
    
    public void setNext(Node next){
        this.next = next;
    }
}