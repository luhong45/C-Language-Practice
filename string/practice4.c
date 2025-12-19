#include <stdio.h>

void mystrcpy(char *dst, const char *src){
    if(dst == NULL || src == NULL) return;
    while(*src != '\0'){
        *dst = *src;
        dst ++;
        src ++;
    }
     *dst = '\0';
}

void mystrcat(char *dst, const char *src){
    if(dst == NULL || src == NULL) return;
    while(*dst != '\0') dst++;
    while(*src != '\0'){
        *dst = *src;
        dst ++;
        src ++;
    }
    *dst = '\0';
}

int mystrlen(const char *str){
    int len = 0;
    while(*str != '\0'){
        len ++;
        str ++;
    }
    return len;
}

int main() {
    char buf[50];
    mystrcpy(buf, "Hello");
    printf("After strcpy : %s\n", buf);
    mystrcat(buf, "World");
    printf("After strcat : %s\n", buf);
    printf("Length       : %d\n", mystrlen(buf));

    return 0;
}