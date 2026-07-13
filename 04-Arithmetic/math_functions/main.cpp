#include <iostream>
#include <cmath>

// https://cplusplus.com/reference/cmath/
int main(){

    double x = 3.32;
    double y = 5.34;
    double z = 3.256;

    double max;
    double min;

    max = std::max(x,y);
    min = std::min(x,z);
    
    double a;
    a = pow(x,y);

    double b;
    b = sqrt(a);

    double c;
    c = abs(y - z);

    std::cout << max << std::endl << min << std::endl;
    std::cout << a << std::endl << b << std::endl << c << std::endl;
    return 0;
}