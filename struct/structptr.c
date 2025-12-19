#include <stdio.h>
#include <stdlib.h>
struct MODEL{
    char *name;
    char direction;
    int value;
};

int main(){
    struct MODEL a;
    struct MODEL *ptr = malloc(sizeof(*ptr));
    ptr -> name = "MODEL_11";
    ptr -> direction = 'A';
    ptr -> value = 10;

    printf("%s\n", ptr -> name);
    printf("%c\n", ptr -> direction);
    printf("%d\n", ptr -> value);
    return 0;
}