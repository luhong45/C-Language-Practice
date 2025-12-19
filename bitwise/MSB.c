#include <stdio.h>


void MSB(unsigned int x){
    unsigned int test = 0x80000000;
    int pos = 31;
    if(x == 0){
        printf("x is 0");
        return;
    }

    while((x & test) == 0){
        test >>= 1;
        pos --;
    }

    printf("MSB bit is at %d bit\n", pos);
}

int main(){
    unsigned int x = 0x0fff0000;
    MSB(x); 
}