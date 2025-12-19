#include<stdio.h>
int main(){
    int (*a)[3];
    int b[2][3] = {{2, 3, 4} ,{7, 8, 9}};
    a = b;
    printf("%d\n", *(*a) + 0);
    printf("%d\n", *(*a) + 1);
    printf("%d\n", *(*a) + 2);

    printf("%d\n", *(*(a + 1)));
    printf("%d\n", *(*(a + 1) + 1));
    printf("%d\n", *(*(a + 1) + 2));
}