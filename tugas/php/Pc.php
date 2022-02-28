<?php

include "Disk.php";
include "Processor.php";
include "Ram.php";

class Pc{
    // atribut
    private $disk, $ram, $processor, $totalPrice;

    // constructor
    public function __construct(){
        $this->disk = new Disk();
        $this->ram = new Ram();
        $this->processor = new Processor();
        $this->totalPrice = 0;
    }

    // setter n getter
    public function setDisk($disk){
        $this->disk = $disk;
    }

    public function getDisk(){
        return $this->disk;
    }
    
    public function setRam($ram){
        $this->ram = $ram;
    }

    public function getRam(){
        return $this->ram;
    }

    public function setProcessor($processor){
        $this->processor = $processor;
    }

    public function getProcessor(){
        return $this->processor;
    }

    public function setTotalPrice($totalPrice){
        $this->totalPrice = $totalPrice;
    }

    public function getTotalPrice(){
        return $this->totalPrice;
    }
}