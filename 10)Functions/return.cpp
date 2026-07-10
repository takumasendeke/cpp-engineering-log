#include <iostream>
#include <cmath>
#include <numbers>

using std::cout;
using std::numbers::pi;

double areaCircle(double radius);

int main(){
    cout << areaCircle(1);

    return 0;
}

double areaCircle(double radius){
    double area = radius < 0 ? -1 : pi * pow(radius,2); 
    return area;
}