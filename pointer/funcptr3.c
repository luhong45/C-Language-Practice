#include<stdio.h>
int main(){
    printf("%p", main); // 函式名稱也是函式指示符會被 complier 認為是 pointer to function
    return 0;
}