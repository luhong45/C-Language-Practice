#include <stdio.h>
#include <stdlib.h>
void generateMatrix(int* mat, int n){
    int startx = 0, starty = 0;
    int loop = n / 2;
    int mid = n / 2;
    int count = 1;
    int offset = 1;
    while(loop--){
        int i = startx;
        int j = starty;
        for(; j < n - offset; j++){
            mat[i * n + j] = count++;
        }
        for(; i < n - offset; i++){
            mat[i * n + j] = count++;
        }
        for(; j > starty; j--){
            mat[i * n + j] = count++;
        }
        for(; i > startx; i--){
            mat[i * n + j] = count++;
        }
        startx++;
        starty++;
        offset += 1;
    }
    if(n%2){ // last number
        mat[mid * n + mid] = count;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int *mat = (int *)malloc(sizeof(int) * n * n);
    generateMatrix(mat, n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf(" %d", mat[i * n + j]);
        }
        printf("\n");
    }

}