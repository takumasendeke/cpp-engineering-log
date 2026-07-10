#include <iostream>
#include <string>

using std::cout;
using std::string;

int main(){

    string name;
    bool empty_name;
    
    empty_name = true; 
    /* 
    if(empty_name){
        cout << "Please enter your name \n";
        std::getline(std::cin , name); // just a gentle reminder to only use std::cin >> ws for when it is in succession]
    }

    cout << "Yo , whats good" << name << "\n";
    */
    // use while loop to prompt 

    while(empty_name) {
        cout << "Please enter your name \n";
        std::getline(std::cin , name);
        empty_name = name.empty();
    }

    cout << "Yo , whats good my boy " << name << "\n";

    return 0;
}