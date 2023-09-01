package models;

import java.util.List;
import java.util.ArrayList;

import models.Node;

public class LinkedList {
    
    private Node head;
    private Integer size;
    
    public LinkedList(){
        this.head = null;
        this.size = 0;
    }

    public void add(Object value){
        if (this.head != null){
            Node pointer = this.head;
            while( pointer.getNext() != null ){
                pointer = pointer.getNext();
            }
            pointer.setNext( new Node(value) );
        } else{
            this.head = new Node(value);
        }
        this.size++;
    }

    public Integer lenght(){
        return this.size;
    }

    public List<Object> getAll(){
        Node pointer = this.head;
        List<Object> values = new ArrayList<>();
        while(pointer != null){
            values.add( pointer.getDate() );
            pointer = pointer.getNext();
        }
        return values;
    }

}
