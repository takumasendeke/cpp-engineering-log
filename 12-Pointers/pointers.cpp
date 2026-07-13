#include <iostream>
#include <string>

using std::string;
using std::cout;

int main(){

    string name = "Taku";
    int age = 21;

    string names[3] = {"Takudzwa","Antony","Masendeke"};

    string *pName = &name; // * deref op // gives the adress
    int *pAge = &age;
    string *pNames = names; // array is already an adress

    cout << pName << "\n";

    cout << *pName << "\n"; // deref to get actual value
    cout << *pAge << "\n";
    cout << *pNames; // first element
    return 0;
}