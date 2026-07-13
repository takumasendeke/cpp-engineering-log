#include <iostream>
#include <vector>
#include <algorithm>


using std::cout;
using std::vector;
using std::max;

// use const and ref operator to prevent copying large variable
int maxProduct(const vector<int> &nums, int k){
    int length = nums.size();
    int largestProduct = 0;

    // edge case handling
    if (length <= k){
        for (int num: nums){
            largestProduct *= num;
        }

        return largestProduct;
    }

    // sliding window
    int currentProduct = 1; // make 1 to prevent multiplaction by 0

    for (int i = 0; i < k; i++){
        currentProduct *= nums[i];
    }

    largestProduct = currentProduct;

    for (int i = k; i < length; i++){
        currentProduct /= nums[i - k];
        currentProduct *= nums[i];

        largestProduct = max(currentProduct,largestProduct);
    }

    return largestProduct;
}

int main(){

    vector<int> nums = {1,4,1,6,-3,3,-5,2,26};
    int k = 4;

    cout << maxProduct(nums,k);
    return 0;
}