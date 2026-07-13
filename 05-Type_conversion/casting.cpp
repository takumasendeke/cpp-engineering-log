#include <iostream>

int main(){

    double x = (int)3.14;
    std::cout << x << std::endl;

    char y = 'd'; // d 
    int z = (int)y;

    std::cout << y << std::endl;
    std::cout << z << std::endl;

    int correct = 9;
    int questions = 10;

    double score = (double)correct/ (double)questions * 100; //needs explicit casting to prevent in division

    std::cout << score << "%" << std::endl;

    return 0;
}