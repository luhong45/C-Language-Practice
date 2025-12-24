#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

struct listnode* detectCycle(struct listnode **head){
    struct listnode *fast = *head;
    struct listnode *slow = *head;
    while(fast && fast -> next != NULL){
        slow = slow -> next;
        fast = fast -> next -> next;
        if(slow == fast){
            struct listnode *index1 = *head;
            struct listnode *index2 = *head;
            while(index1 != index2){
                index1 = index1 -> next;
                index2 = index2 -> next;
            }
            return index2;
        }
    }
    return NULL;
}