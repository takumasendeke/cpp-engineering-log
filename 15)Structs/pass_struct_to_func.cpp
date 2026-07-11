#include <iostream>
#include <string>

using std::cout;
using std::string;

// struct is pass by value and not pass by ref
struct student{
    // members 
    string name; 
    double GPA = 0.00;
    bool enrolled = false;
}; 

// pass by value meaning a copy is made - use & operator
void displayStudent(student &student){
    cout << student.name << "\n";
    cout << student.GPA<< "\n";
}
int main(){
    student MSNTAK009;
    MSNTAK009.name = "Takudzwa";
    MSNTAK009.GPA = 75.40;

    displayStudent(MSNTAK009);

    return 0;
}