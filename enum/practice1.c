#include<stdio.h>
#include<stdlib.h>
enum {false, true};

int main(){
    int i = 1;
    do{
        printf("%d\n", i);
        i++;
        if(i > 15){ 
            break;
        }
    }while(true);
    return 0;
}