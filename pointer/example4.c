#include <stdio.h>

int main(){
    int a[] = {1, 2, 3, 4, 5};
    int *p1 = a;
    char b[] = "54321";
    char *p2 = b;

    printf("%d\n", *p1++);//1, and the pointer move to next element
    printf("%d\n", *++p1); // 3, the pointer moves first then dereference
    printf("%d\n", ++*p1); // 4,dereference then plus one

    printf("%c\n", *p2);
    printf("%c\n", *(p2 + 1));
    printf("%zu\n", sizeof(b));
}