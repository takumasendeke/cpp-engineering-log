#include <iostream>
#include <string>

using std::cout;
using std::string;

// paired named integer options
enum Grade {A = 5, B = 4, C = 3 };
int main(){
    Grade CS_grade = C;

    switch(CS_grade){
        case A: cout << "Goated";
                break;
        case B: cout << "Meh";
                break;
        case C: cout << "Lock in";
                break;

    }
    return 0;
}