#include <stdio.h>


void LSB(unsigned int x){
    unsigned int test = 0x00000001;
    int pos = 0;
    if(x == 0){
        printf("x is 0");
        return;
    }

    while((x & test) == 0){
        test <<= 1;
        pos ++;
    }

    printf("LSB bit is at %d bit\n", pos);
}

int main(){
    unsigned int x = 0x00000000;
    LSB(x); 
}