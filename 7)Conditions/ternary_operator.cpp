#include <iostream>

// using namespace std; mall practice will cause namespace conflicts 

int main(){

    int grade;
    unsigned long long num;

    std::cout << "Please enter a grade" << std::endl;
    std::cin >> grade;

    (grade >= 75 || grade == 50) ? std::cout << "Passed" << std::endl : std::cout << "Chopped" <<  std::endl;
    
    std::cout << "Check whether a number is odd or even , enter a number" << std::endl;
    std::cin >> num;

    (num % 2 == 0 ) ? std::cout << "Even" << std::endl : std::cout << "Odd" << std::endl;

    bool happy = true;

    if (!happy){
        std::cout << "Sad" << std::endl;
    } else {
        std::cout << "Yeah, cool beans" << std::endl;
    }
    return 0;
}