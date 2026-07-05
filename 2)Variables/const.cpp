#include <iostream>
#include <cmath>

int main(){
    const double PI = 3.1415926; // constant + uppercase names(security) 
    double radius = 10.0;
    double circumference = 2*PI*radius;

    std::cout << circumference << "cm";

    const int LIGHT_SPEED = 299792458; // read only
    const double EPSILON_0 = 4*PI*(pow(10,8));
    return 0;
}