#include <iostream>
#include <string>

using std::cout;
using std::string;

void printData(const string &name, const int &age);

int main(){

    string name = "D";
    int age = 21;

    printData(name,age);

    return 0;
}

// more secure add const to the parameter names
// const makes them read only  
void printData(const string &name,const int &age){
    cout << "Hello, " << name << ". You are " << age;
}