#include <stdio.h>
#include <stdlib.h>

int removeelement(int* nums, int numsize, int val){
    for(int i = 0; i < numsize; i++){
        if(nums[i] == val){
            for(int j = i + 1; j < numsize; j++){
                nums[j - 1] = nums[j];
            }
            i--;
            numsize--;
        }
    }
    return numsize;
}

int main(){
    int nums[] = {1, 3, 5, 7, 9};
    int size = sizeof(nums) / sizeof(nums[0]);
    int size_number = removeelement(nums, size, 7);
    printf("size : %d" , size_number);
}