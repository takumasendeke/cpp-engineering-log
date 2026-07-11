#include <iostream>
#include <string>

using std::cout;
using std::string;

int main(){

    // nullptr 

    int *ptr = nullptr; // good practice to ensure it doesnt point somewhere random

    int x = 21;
    //ptr = &x;

    ptr == nullptr ? cout << "address not assigned" : cout << "address was assigned";
    cout << "\n" << *ptr; // undefined behaviour
    return 0;
}