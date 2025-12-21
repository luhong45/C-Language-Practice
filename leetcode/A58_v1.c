#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n);
    // malloc array
    int *vec = (int *)malloc(n * sizeof(int)) ;
    int *p = (int *)malloc(n * sizeof(int)) ;

    int presum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &vec[i]);
        presum += vec[i];
        p[i] = presum;
    }

    int a, b;
    while(scanf("%d %d", &a, &b) == 2){
        int sum;
        if(a == 0){
            sum = p[b];
        }else{
            sum = p[b] - p[a - 1];
        }
        printf("%d\n", sum);
    }

    free(vec);
    free(p);
    return 0;
}