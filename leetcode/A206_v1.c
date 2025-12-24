#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

void reverselist(struct listnode **head){
    struct listnode *curr = *head, *pre = NULL, *next = NULL;
    while(curr){
        next = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
    }
    *head = pre;
}
