#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::vector;
using std::max;

// use const and ref operator to prevent copying large variable
int maxProduct(const vector<int> &nums, int k){
    int length = nums.size();
    int largest = 0;

    // edge case handling
    if (length <= 5){
        for (int num: nums){
            largest += 
        }
    }
}

int main(){

    vector<int> nums = {1,4,1,6,-3,3,-5,2,26};
    int k = 4;

    cout << maxProduct(nums,k);
    return 0;
}