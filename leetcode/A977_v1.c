#include <stdio.h>
#include <stdlib.h>

int* sortsquare(int *num, int size, int *returnsize){
    int* result = (int *)malloc(sizeof(int) * size);
    int i = 0;
    int j = size - 1;
    int k = size - 1;
    while(i <= j){
        int left = num[i];
        int right = num[j];
        int leftsq = left * left;
        int rightsq = right * right;
        if(leftsq < rightsq){
            result[k--] = rightsq;
            j--;
        }else{
            result[k--] = leftsq;
            i++;
        }
    }
    *returnsize = size; 
    return result;    
}
int main(){
    int num[] = {2, 4, 6, -1, 5};
    int size = sizeof(num) / sizeof(num[0]);
    int returnsize = 0; 
    int *ans = sortsquare(num, size, &returnsize);

    for(int i = 0; i < size; i++){
        printf("%d ", ans[i]);
    }
    printf("\n");
}