#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

struct listnode* reverselist_v1(struct listnode *head){
    struct listnode *pre = NULL, *curr = head, *next = NULL;
    while(curr){
        next = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
    }
    head = pre;
    return pre;
}
// head = reverselist_v1(head);

void reverselist_v2(struct listnode **head){
    struct listnode *pre = NULL, *curr = *head, *next = NULL;
    while(curr){
        next = curr -> next;
        curr -> next = pre;
        pre = curr;
        curr = next;
    }
    *head = pre;
}
// reverselist_v2(&head)