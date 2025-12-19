#include <stdio.h>

int main(){
    for(int d = 0; d < 5; d++){
        for(int a = 0; a <= 4; a++){
            for(int b = 1; b <= a; b++){
                printf(" ");
            }
            for(int c = 1; c <= 9 - 2 *a; c++){
                printf("*");
            }
            printf("\n");
        }
        for(int a = 4; a >= 0; a--){
            if(a == 4) continue;
            for(int b = 1; b <= a; b++){
                printf(" ");
            }
            for(int c = 1; c <= 9 - 2 *a; c++){
                printf("*");
            }
            printf("\n");
        }
    }
}