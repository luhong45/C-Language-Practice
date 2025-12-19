#include<stdio.h>

struct site{
    char name[20];
    int no_of_pages;
};

int main(){
    struct site s = {"this is my struct.", 20000};
    struct site *ptr = &s;

    printf("%d\n", ptr -> no_of_pages);
    printf("%s\n", ptr -> name);
}