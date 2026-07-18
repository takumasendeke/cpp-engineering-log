#include <iostream>
#include <vector>

using std::cout;
using std::vector;

vector<int> subarraySum(const vector<int>& nums,int target){
    vector<int> solution = {0,0};
    int length = nums.size();
    int currentSum = 0;
    int start = 0;

    for (int end = 0; end < length ; end++){
        currentSum += nums[end];

        if (currentSum == target){
            solution[0] = start;
            solution[1] = end;
            return solution;
        }

        while(currentSum > target){
            currentSum -= nums[start];
            start++;
        }
    }
    return solution;
}

int main(){

    vector<int> nums = {3,1,4,9,2,1,7,5};
    int target = 10;

    cout << "[ ";
    for(int num: subarraySum(nums,target)){
        cout << num << " ";
    }
     cout << "]";

    return 0;
}