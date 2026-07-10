#include <iostream>

using std::string;
using std::cout; 

int main(){
    string PhoneCompany[] = {"apple","samsung"};

    cout << PhoneCompany << "\n"; // returns adress of array
    cout << PhoneCompany[0] << "\n"; // first element

    // or 

    string gpuCompany[2];
    gpuCompany[0] = "nvidia";
    gpuCompany[1] = "amd";

    cout << gpuCompany[0] << "\n";

    cout << sizeof(gpuCompany) / sizeof(string); // get size of array , size of can be used on classes and objects too


    return 0;
}