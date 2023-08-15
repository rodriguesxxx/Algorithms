package models;

class Node{
    private Integer date;
    private Node next = null;
    
    public Node(Integer date){
        this.setDate(date);
    }

    public Integer getDate(){
        return this.date;
    }

    public void setDate(Integer date){
        this.date = date;
    }

    public Node getNext(){
        return  this.next;
    }
    
    public void setNext(Node next){
        this.next = next;
    }
}