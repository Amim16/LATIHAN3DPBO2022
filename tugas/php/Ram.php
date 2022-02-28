<?php

class Ram{
    // atribut
    private $capacity, $price;

    // constructor
    public function __construct($capacity = 0, $price = 0){
        $this->capacity = $capacity;
        $this->price = $price;
    }

    // setter n getter
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