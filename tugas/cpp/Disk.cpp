#include <bits/stdc++.h>

using namespace std;

class Disk {
    private: 
        // atribut
        string type;
        int capacity, price;

    public:
        // constructor
        Disk(){
            this->type = "-";
            this->capacity = 0;
            this->price = 0;
        }

        Disk(string type, int capacity, int price){
            this->type = type;
            this->capacity = capacity;
            this->price = price;
        }

        // setter n getter
        void setType(string type){
            this->type = type;
        }

        string getType(){
            return this->type;
        }

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

        ~Disk(){};
};