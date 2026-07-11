#include <iostream>
#include <string>

using std::cout;
using std::string;

void walk(int steps);
int factorial(int num);

int main(){

    walk(50);
    cout << factorial(5);

    return 0;
}

/* // iterative approach (slower in this case and uses more memory)
void walk(int steps){
    for(int i = 0; i < steps; i++){
        cout << "Step" << "\n";
    }
}
*/

void walk(int steps){
    if (steps > 0 ){
        cout << "Step \n";
        walk(steps - 1);
    } 
}

int factorial(int num){
    if (num == 0){ return 1;}
    return num * factorial(num-1);
}