#include <stdio.h>
#include <stdlib.h>

int binarysearch(int* num, int size, int target){
    int left = 0;
    int right = size - 1;

    while(left <= right){
        int middle = left + (right - left) / 2;
        
        if(num[middle] > target){
            right = middle - 1;
        }else if(num[middle] < target){
            left = middle + 1;
        }else{
            return middle;
        }
    }
    return -1;
}

int main() {
    int nums[] = {1, 3, 5, 7, 9};
    int size = sizeof(nums) / sizeof(nums[0]);

    int index = binarysearch(nums, size, 7);
    printf("position : %d\n", index);  // 輸出 3

    return 0;
}