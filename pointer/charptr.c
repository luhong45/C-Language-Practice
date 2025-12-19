#include <stdio.h>

int main(){
    char str[] = "geeksforgeeks";
    char *s1 = str, *s2 = str;
    int i;
    for(int i = 0 ; i < 7 ; i ++){
        printf("%c", *str);
        s1 ++;
    }
    printf("\n");
    for(int i = 0 ; i < 7 ; i ++){
        printf("%c", *s2);
        s2 ++;
    }
}