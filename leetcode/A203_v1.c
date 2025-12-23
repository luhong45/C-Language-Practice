#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

void deletenode(int **head, int data){
    struct listnode *prev = NULL, *curr = *head;
    while(curr && curr -> data != data){
        prev = curr;
        curr = curr -> next;
    }
    if(curr == NULL){
        printf("node doesn't exist!");
    }else if(*head = curr){
        *head = curr -> next;
        free(curr);
    }else{
        prev -> next = curr -> next;
        free(curr);
    }
}