#include <iostream>

using std::cout;

int main(){
    int number;

    cout << "Enter a positive number please: ";
    std::cin >> number; 

    while(number < 0){
        cout << "Please enter a positive number : ";
        std::cin >> number;
    }
    cout << number << "\n";

    // saves on code 

    do{
        cout << "Please enter a positive number : ";
        std::cin >> number; 
    } while(number < 0); 
    return 0;
}