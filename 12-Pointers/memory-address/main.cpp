#include <iostream>

using std::string;
using std::cout;

int main(){
    string name = "Taku";
    int age = 21;
    bool student = true;

    cout << &name << "\n"; // adress-of operator
    cout << &age << "\n"; // retuns adress in memory
    cout << &student << "\n";

    
    return 0;
}