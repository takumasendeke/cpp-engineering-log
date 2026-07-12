#include <iostream>
#include <vector>

using std::cout;
using std::vector;

// using const to prevent changing original value and & to prevent copying
int subarrayTargetSum(const vector<int> &nums, int target, int k){
    int length = nums.size();

    int onTarget = 0;
    int currentSum = 0;

    // edge case 
    if (length <= k){
        for (int num: nums){
            currentSum += num;
        }

        onTarget = (currentSum == target);
        return onTarget;
    }

    // sliding window
    for (int i = 0; i < k ; i++){
        currentSum += nums[i];
    }

    onTarget += (currentSum == target); // branchless programming absolute syntatic sugar

    for (int i = k; i < length; i++){
        currentSum += nums[i] - nums[i - k];
        onTarget += (currentSum == target); 
    }

    return onTarget;
}

int main(){

    vector<int> nums = {2,3,2,2,3,1,3,8,5,0,2,4};
    int target = 7;
    int k = 3;

    cout << subarrayTargetSum(nums,target,k);

    return 0;
}