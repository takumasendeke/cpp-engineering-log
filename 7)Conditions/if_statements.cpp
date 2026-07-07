#include <iostream>

int main(){
    int age;

    std::cout << "Please enter your age below" << std::endl;
    std::cin >> age;

    
        if (age >= 24 ){
            std::cout << "unc" << std::endl;
        } 
        else if (age == 21){
            std::cout << "We're the same age, cool beans!" << std::endl;
        }
        else {
            std::cout << "youngin" << std::endl;
        }
        
    return 0;
}