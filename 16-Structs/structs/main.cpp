#include <iostream>
#include <string>

using std::cout;
using std::string;

struct student{
    // members 
    string name; 
    double GPA = 0.00;
    bool enrolled = false;
}; 

int main(){

    student MSNTAK009;

    MSNTAK009.name = "Taludzwa Masendeke";
    MSNTAK009.GPA = 75.40;
    MSNTAK009.enrolled = true;


    MSNTAK009.enrolled ? cout << MSNTAK009.name << "\n" << MSNTAK009.GPA: cout << "Not enrolled";

    return 0;
}