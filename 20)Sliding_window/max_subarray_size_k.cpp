#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::vector;
using std::max;

// use const and ref operator to prevent copying large variable
int maxSum(const vector<int> &nums, int k){

    int length = nums.size();

    int largestSum = 0;
    
    // handle edge cases
    if (length <= k){
        for(int num:nums){
            largestSum += num;
        }
    }

    int currentWindowSum = 0;
    // use actual sliding window technique
    // intial window size 
    for (int i = 0; i < k; i++){
        currentWindowSum += nums[i];
    }

    largestSum = currentWindowSum;

    for (int i = k; i < length; i++){
        currentWindowSum += nums[i] - nums[i - k];
        largestSum = max(currentWindowSum, largestSum);
    }

    return largestSum;
}

int main(){

    vector<int> nums = {1,4,1,10,25,3,5,0,26};
    int k = 4;

    cout << maxSum(nums, k);

    return 0;
}