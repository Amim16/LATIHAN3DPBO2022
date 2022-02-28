#include <bits/stdc++.h>

using namespace std;

class Ram{
    private:
        // atribut
        int capacity, price;

    public:
        // constructor
        Ram(){
            this->capacity = 0;
            this->price = 0;
        }

        Ram(int capacity, int price){
            this->capacity = capacity;
            this->price = price;
        }

        // setter n getter
        void setCapacity(int capacity){
            this->capacity = capacity;
        }

        int getCapacity(){
            return this->capacity;
        }

        void setPrice(int price){
            this->price = price;
        }

        int getPrice(){
            return this->price;
        }

        ~Ram(){};
};