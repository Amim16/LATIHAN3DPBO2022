#include <bits/stdc++.h>

using namespace std;

class Processor{
    private:
        // atribut
        string name;
        int price;

    public:
        // constructor
        Processor(){
            this->name = "-";
            this->price = 0;
        }

        Processor(string name, int price){
            this->name = name;
            this->price = price;
        }

        // setter n getter
        void setName(string name){
            this->name = name;
        }

        string getName(){
            return this->name;
        }

        void setPrice(int price){
            this->price = price;
        }

        int getPrice(){
            return this->price;
        }

        ~Processor(){};
};