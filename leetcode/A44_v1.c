#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
int main(){
    int n, m;
    scanf("%d %d", &n, &m);
    int sum = 0;
    int *mat = (int *)malloc(sizeof(int) * n * m);
    int *horizontal = (int *)calloc(n, sizeof(int)); // allocate memory and initialize all elements to zero
    int *vertical = (int *)calloc(m, sizeof(int));

    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int x;
            scanf("%d", &x);
            mat[i * m + j] = x;
            sum += x;
            horizontal[i] += x;
            vertical[j] += x;
        }
    }
    int result = INT_MAX;
    int diff = 0;
    int horizontalcut = 0;
    for(int i = 0; i < n; i++){
        horizontalcut += horizontal[i];
        int diff = sum - 2 * horizontalcut;
        int adiff = abs(diff);
        if(adiff < result){
            result = adiff;
        }
    }

    int verticalcut = 0;
    for(int j = 0; j < m; j++){
        verticalcut += vertical[j];
        int diff = sum - 2 * verticalcut;
        int adiff = abs(diff);
        if(adiff < result){
            result = adiff;
        }
    }

    printf("diff : %d", result);
}