#include<stdio.h>

int b(int num)
{
    return 2*num;
}
int c(int num)
{
    return 3*num;
}
int d(int num)
{
    return 4*num;
}

int main(){
    int (*a[3])(int);
    a[0] = b;
    a[1] = c;
    a[2] = d;
    printf("%d\n", a[0](2));
    printf("%d\n", a[1](3));
    printf("%d\n", a[2](4));
}