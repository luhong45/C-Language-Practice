#include<stdio.h>
int main(){
    static int i = 5;
    static int count = 1;
    if(--i){
        printf("第 %d 次呼叫main\n", count++);
        main();
        printf("%d\n", i);
    }
}