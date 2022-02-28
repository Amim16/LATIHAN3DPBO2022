<?php

class Processor{
    // atribut
    private $name, $price;

    // constructor
    public function __construct($name = "-", $price = 0){
        $this->name = $name;
        $this->price = $price;
    }

    // setter n getter
    public function setName($name){
        $this->name = $name;
    }

    public function getName(){
        return $this->name;
    }

    public function setPrice($price){
        $this->price = $price;
    }

    public function getPrice(){
        return $this->price;
    }
}