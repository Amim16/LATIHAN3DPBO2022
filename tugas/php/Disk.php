<?php

class Disk{
    // atribut
    private $type, $capacity, $price;

    // constructor
    public function __construct($type = "-", $capacity = 0, $price = 0){
        $this->type = $type;
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // setter n getter
    public function setType($type){
        $this->type = $type;
    }

    public function getType(){
        return $this->type;
    }

    public function setCapacity($capacity){
        $this->capacity = $capacity;
    }
    
    public function getCapacity(){
        return $this->capacity;
    }
    
    public function setPrice($price){
        $this->price = $price;
    }

    public function getPrice(){
        return $this->price;
    }
}