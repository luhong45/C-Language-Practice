#include <stdio.h>

int main(){
    int i = 0;
    while(i <= 4){
        printf("%d", i);
        if(i > 3){
            goto foo;
        }
        i++;
    }
foo:
    printf("pp");
    return 0;
}