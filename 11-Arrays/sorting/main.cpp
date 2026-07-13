#include <iostream>
#include <string>

using std::cout;
using std::string;
using std::to_string;

void bubbleSort(int nums[], int length);

int main(){
    int nums[] = {4,2,6,1,3,9,7,5,8};
    int length = sizeof(nums) / sizeof(int);

    bubbleSort(nums,length);

    for (int element: nums){
        cout << element << " ";
    }

    return 0;
}

// bad implementation but i though of it on hand
// use nested for loop next time 
void bubbleSort(int array[], int length){
    int temp;
    int attempts = length*length;
    int j = 1;

    while (j < attempts){
        for(int i = 0; i <= length - 2; i++){
            if (array[i] > array[i + 1]){
                temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;
            }
        }

        j++;
    }
}
