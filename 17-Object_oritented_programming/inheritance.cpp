#include <iostream>
#include <string>

using std::string;
using std::cout;

class Animal{
    public:
        bool extant = true;

    void eat(){
        cout << "eating...\n";
    }
};

class Hamster : public Animal{
    public:

    void squeal(){
        cout << "squeeeel \n";
    }
};

class Lion : public Animal{
    public:

    void roar(){
        cout << "rooaaaarrrrr! \n";
    }
};

int main(){
    Hamster benny;
    Lion simba;

    benny.eat();
    simba.roar();
    benny.squeal();
    return 0;
}