#include <iostream>

int main(){

    int x;
    x = 67; //not funny (lol)

    int y;
    y = 69;
    
    int sum;
    sum = x + y;
    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // INTEGERS
    int age = 7;
    int year = 2026;
    int decimal = 7.8; // gets truncated 

    // DOUBLE 
    double price = 1199.99;
    double GPA = 75.6; // yes this is my gpa :)

    // CHARACTER
    char grade = 'C'; // what i always get for CS
    char intial = 'T';
    char currency = 'R'; // RANDS

    // BOOLEAN
    bool happy = true; // C++ is awesome
    bool powered = true; 

    // STRING
    std::string name = "Takudzwa";
    std::string surname = "Masendeke";
    std::string food = "egg fried rice";

    std::cout << "MEOW" << std::endl; //string literal

    return 0;
}