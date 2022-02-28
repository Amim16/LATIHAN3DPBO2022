#include <bits/stdc++.h>
#include "Disk.cpp"
#include "Processor.cpp"
#include "Ram.cpp"

using namespace std;

class Pc{
    private:
        // atribut
        Disk disk;
        Processor processor;
        Ram ram;
        int totalPrice;

    public:
        // constructor
        Pc(){
            this->disk = Disk();
            this->processor = Processor();
            this->ram = Ram();
            this->totalPrice = 0;
        }

        Pc(Disk disk, Processor processor, Ram ram){
            this->disk = disk;
            this->processor = processor;
            this->ram = ram;
            this->totalPrice = disk.getPrice() + processor.getPrice() + ram.getPrice();
        }

        // setter n getter
        void setDisk(Disk disk){
            this->disk = disk;
        }

        Disk getDisk(){
            return this->disk;
        }

        void setProcessor(Processor processor){
            this->processor = processor;
        }

        Processor getProcessor(){
            return this->processor;
        }

        void setRam(Ram ram){
            this->ram = ram;
        }

        Ram getRam(){
            return this->ram;
        }

        void setTotalPrice(int totalPrice){
            this->totalPrice = totalPrice;
        }

        int getTotalPrice(){
            return this->totalPrice;
        }

        ~Pc(){};
};