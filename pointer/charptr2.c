#include <stdio.h>

int main(){
    char arr[] = "abcdefghijk";
    char *ptr = arr;

    while(*ptr != '\0'){
        ++*ptr++; // Increment the current character and move pointer to the next character 
    }
    printf("%s %s", arr, ptr);
    return 0;
}