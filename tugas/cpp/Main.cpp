#include <bits/stdc++.h>
// #include "Disk.cpp"
// #include "Processor.cpp"
// #include "Ram.cpp"
#include "Pc.cpp"

using namespace std;

int main(){
    Pc pc; // buat objek PC

    // instansiasi
    pc.setProcessor(Processor("RADEON", 850000));
    pc.setDisk(Disk("SSD", 2000, 1000000));
    pc.setRam(Ram(8, 800000));
    pc.setTotalPrice(pc.getProcessor().getPrice() + pc.getDisk().getPrice() + pc.getRam().getPrice());

    cout << "Keterangan PC : " << endl;
    cout << "Nama Processor : " << pc.getProcessor().getName() << endl;
    cout << "Harga Processor : " << pc.getProcessor().getPrice() << endl;
    cout << "Tipe Disk : " << pc.getDisk().getType() << endl;
    cout << "Kapasitas Disk : " << pc.getDisk().getCapacity() << endl;
    cout << "Harga Disk : " << pc.getDisk().getPrice() << endl;
    cout << "Kapasitas RAM : " << pc.getRam().getCapacity() << endl;
    cout << "Harga RAM : " << pc.getRam().getPrice() << endl;
    cout << "-> Total Harga : " << pc.getTotalPrice() << endl;

    return 0;
}