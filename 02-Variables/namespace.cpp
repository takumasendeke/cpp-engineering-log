#include <iostream>

namespace first{
    int x = 1;
}

namespace second{
    int x = 2;
}

int main(){
    
    //int x = 0;
    int x = 3; 
    // This is an error becauase they share the same name

    // if not specified local x is used ie x = 3

    std::cout << x << std::endl;

    // choosing a specific versition
    std::cout << first::x << std::endl; // :: next to first is the scope resolution operator
    std::cout << second::x << std::endl;

    using namespace first; // choose from the first namespace

    //using namespace std; // save time typing std:: each time for declartion but dangerous because of name confilcts

    using std::cout;
    using std::string;
    using std::endl;

    cout << "Hi" << endl;
    string dog = "Scooby";
    cout << dog << endl;
    return 0;
}