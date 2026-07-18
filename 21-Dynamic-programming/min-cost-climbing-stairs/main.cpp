#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::min;

int minCost(const vector<int>& nums){
    int length = nums.size();

    int prev1 = nums[0];
    int prev2 = nums[1];

    int lowest;
    
    for (int i = 2; i < length ; i++){
        lowest = min(prev1, prev2) + nums[i];
        prev1 = prev2;
        prev2 = lowest;
    }

    return lowest;
}

int main(){

    vector<int> cost = {5,18,4,15,6};

    cout << minCost(cost);
    return 0;
}