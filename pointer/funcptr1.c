#include <stdio.h>

int func(int num) {
    return num;
};

int main(){
    int (*a)(int) = func;
    printf("%d", a(10));
}