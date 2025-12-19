#include <stdio.h>
#include <stdlib.h>
// macro
#define SETBIT(p, n) ((p) |= (1 << (n)))
#define CLEARBIT(p, n) ((p) &= ~(1 << (n)))
#define FLIPBIT(p, n) ((p) ^= (1 << (n)))
#define CHECKBIT(p, n) ((p) & (1 << (n)))

#define BIT3 (1 << 4)

int main(){
    int a = 0, b = 0;
    a |= BIT3;
    printf("0x%x\n", a); // hexadecimal

    b &= BIT3;
    printf("0x%x", b);
}