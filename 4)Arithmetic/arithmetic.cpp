#include <iostream>
#include <cmath>

int main(){

    int men = 20; 
    int women = 20;

    int people = men + women; 

    std::cout << "people: " << people << std::endl;

    people ++;
    people -= 2;

    int x = 8;
    int y = 3;

    int remainder  = x % y;
    int divide = x / y;
    int multiply = x * y;
    int power = pow(x,y);
 
    std::cout << remainder << std::endl;
    std::cout << divide << std::endl;
    std::cout << multiply << std::endl;
    std::cout << power << std::endl;

    return 0;
}