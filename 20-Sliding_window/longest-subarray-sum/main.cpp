#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::vector;
using std::max;

int longestSubarraySum(const vector<int>& nums, int target){
    int length = nums.size();
    int start = 0;
    int longest = 0;
    int currentSum = 0;

    for (int end = 0; end < length; end++){
        currentSum += nums[end];

        if (currentSum == target){
            longest = max(longest,(end - start) + 1);
        }

        while(currentSum > target){
            currentSum -= nums[start];
            start++;
        }
    }

    return longest;
}

int main(){

    vector<int> nums = {4,3,3,2,1,5,2,3,5,10,1};
    int target = 10;

    cout << longestSubarraySum(nums,target);

    return 0;
}