#include <stdio.h>
struct MODEL{
    char name[15];
    char direction;
    int value;
    struct MODEL *MODEL_ptr;
};

int main(){
    struct MODEL a = {
        .name = "model_11",
        .direction = 'c',
        .value = 1,
        .MODEL_ptr = NULL,
    };

    printf("%s\n", a.name);        
    printf("%c\n", a.direction);   
    printf("%d\n", a.value);       
    printf("%p", a.MODEL_ptr);

}