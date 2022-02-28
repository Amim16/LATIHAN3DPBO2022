<?php

include "Pc.php";

$pc = new Pc(); // buat objek PC

// instansiasi
$pc->setProcessor(new Processor("RYZEN", 5300000));
$pc->setDisk(new Disk("HDD", 500, 900000));
$pc->setRam(new Ram(16, 2000000));
$pc->setTotalPrice($pc->getProcessor()->getPrice() + $pc->getDisk()->getPrice() + $pc->getRam()->getPrice());

echo ("Keterangan PC : <br>");
echo ("Nama Processor : " . $pc->getProcessor()->getName() . "<br>");
echo ("Harga Processor : " . $pc->getProcessor()->getPrice() . "<br>");
echo ("Tipe Disk : " . $pc->getDisk()->getType() . "<br>");
echo ("Kapasitas Disk : " . $pc->getDisk()->getCapacity() . "<br>");
echo ("Harga Disk : " . $pc->getDisk()->getPrice() . "<br>");
echo ("Kapasitas RAM : " . $pc->getRam()->getCapacity() . "<br>");
echo ("Harga RAM : " . $pc->getRam()->getPrice() . "<br>");
echo ("-> Total Harga : " . $pc->getTotalPrice() . "<br>");