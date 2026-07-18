#include <iostream>
#include <unordered_map>

using std::cout;
using std::unordered_map;

unordered_map<long long,long long> memo = {};

long long numberOfSteps(long long number){
    if (memo.count(number)  > 0){
        return memo[number];
    }

    if (number == 1){return 1LL;}
    else if(number == 2){return 2LL;}

    long long solution = numberOfSteps(number - 1) + numberOfSteps(number - 2);
    memo[number] = solution;

    return solution;
}

int main(){

    cout << numberOfSteps(60);

    return 0;
}