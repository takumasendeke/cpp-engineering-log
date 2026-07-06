#include <iostream>
// cout << (insertion operator)
// cin >> (extraction operator)
int main(){
    std::string name;
    std::string adress;
    int age;

    std::cout << "What is your name?" << std::endl;
    std::cin >> name;
    
    // be carefule name has a newline character left behind must be fixed ie name /n (will cause second command for adress to be skipped)
    // add next to std::cin >> std::ws (ws - whitespace) extract whitesapce
    std::cout << "Where do you live?" << std::endl;
    std::getline(std::cin >> std::ws ,adress); // get lines even when it has spaces

    std::cout << "What is your age?" ;//<< std::endl;
    std::cin >> age;

    int birth_year = 2026 - age;
    std::cout << "hi " << name << " born in the year " << birth_year << ", you live at " << adress <<std::endl; // use << and not + for better memory managment 
    return 0;
}