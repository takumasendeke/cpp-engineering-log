#include <iostream>

using std::cout;
using std:: string;

void coolGuy(); // to decalre after main 

void hiThere(string name, int age){
    cout << "Hi there " << name;
    cout << ", you're an unc gang" << age << "\n";
}

int main(){
    string name = "Taku";
    int age = 21;

    hiThere(name,age);
    coolGuy();
    return 0;
}

void coolGuy(){
    cout << "yo \n";
}