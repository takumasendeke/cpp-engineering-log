#include <iostream>

using std::cout;

int main(){

    for(int index = 1; index <= 3; index++){
        if (index == 2) {
            continue; // skip
        }
        cout << index << "\n";
    }

    for(int index = 0; index <= 10; index+=2){
        if(index == 8) {
            break; // stop
        }
        cout << index << "\n";
    }
    return 0;
}