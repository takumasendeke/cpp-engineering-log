#include <iostream>
#include <string>

using std::cout;
using std::string;

int main(){

    int *pNum = nullptr;

    pNum = new int;

    *pNum = 21;
    
    cout << "address: " << pNum << " ";
    cout << "value: " << *pNum;

    delete pNum; // Freeing up memory prevent leak 
    return 0;
}