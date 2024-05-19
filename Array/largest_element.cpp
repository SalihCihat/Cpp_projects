#include <iostream>
/*Write a C++ program to find the
  largest element of a given array of integers.*/

int main() {

    int nums[] = {3,5,8,2,11,6, 14};

    std::cout << "Array: ";

    for(int i = 0; i < sizeof(nums)/sizeof(nums[0]) ; i++){
        std::cout << nums[i] << " ";
    }

    int largest = nums[0];

    for(int j = 1; j < sizeof(nums)/sizeof(nums[0]) ; j++){
        if(nums[j] > largest){
            largest = nums[j];
        }
    }
    std::cout << "\nLargest element of array is: " << largest << std::endl;

    return 0;
}
