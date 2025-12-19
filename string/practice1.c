#include<stdio.h>
#include<stdlib.h>

char *getstring(){
    // char *str = "Nice to meet you!";
    static char str[] = "Nice to meet you!"; // Dangling Pointer Problem
    return str;
}

int main(){
    printf("%s", getstring());
    return 0;
}