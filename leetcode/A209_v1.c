#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int minsubarray(int s, int *nums, int numsize){
    int left = 0;
    int sum = 0;
    int result = INT_MAX;

    for(int right = 0; right < numsize; right++){
        sum += nums[right];
        while(s <= sum){
            int len = right - left + 1; 
            if(len < result){ // search for shortest length
                result = len;
            }
            sum -= nums[left++];
        }
    }
    return result == INT_MAX ? 0 : result; 
}

int main(){
    int s, n;
    while(scanf("%d %d", &s, &n) != 2){
        return 0;
    }
    int *nums = (int *)malloc(sizeof(int) * n);
    for(int i = 0; i < n; i++){
        scanf("%d", &nums[i]);
    }
    int ans = minsubarray(s, nums, n);
    printf("%d", ans);
}