#include <iostream>
#include <vector>

using std::vector;
using std::cout;

long long numberOfSteps(int number){
    vector<long long> solutions(number + 1,0); // allocate memory

    solutions[1] = 1LL;
    solutions[2] = 2LL;

    for (int i = 3; i <= number; i++){
        solutions[i] = solutions[i - 1] + solutions[i - 2];
    }

    return solutions[number];
}

int main(){

    cout << numberOfSteps(50);

    return 0;
}