#include <iostream>
#include <vector>

// typedef = nickname for new type (helps with readbility)

typedef std::vector<std::pair<std::string, int>> pairlist_t; // long datatype , _t is convention
typedef std::string text_t;
typedef int age;

//typedef has been replaced with using since it works better with templates 
using decimal = double;

int main(){

    // instead of 
    std::vector<std::pair<std::string, int>> pairlist1;
    
    // now it is 
    pairlist_t pairlist2;

    text_t middle_name = "Antony";
    age Antony = 21;

    std::cout << middle_name << std::endl;

    const decimal PI = 3.14159265436;
    std::cout << PI << std::endl;
    return 0;
}