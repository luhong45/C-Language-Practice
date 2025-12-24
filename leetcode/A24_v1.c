#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

// push node
void pushHead(struct listnode **head, int data){
    struct listnode *new_node = NULL;
    new_node = (struct listnode *)malloc(sizeof(struct listnode));
    if(new_node == NULL) return;
    new_node -> next = *head;
    new_node -> data = data;
    *head = new_node;
}

void swapPairs(struct listnode **head){
    struct listnode *new_node = NULL;
    new_node = (struct listnode *)malloc(sizeof(struct listnode));
    new_node -> next = *head;
    struct listnode *curr = new_node;
    while(curr -> next && curr -> next -> next){
        struct listnode *first = curr -> next;
        struct listnode *second = curr -> next -> next;

        first -> next = second -> next;
        second -> next = first;
        curr -> next = second;
        curr = first; // next round, curr = second node
    }
    *head = new_node -> next;
    free(new_node);
}

// print list
void printlist(struct listnode *head){
    struct listnode *ptr = head;
    while(ptr -> next){
        printf("%d -> ", ptr -> data);
        ptr = ptr -> next;
    }
    printf("%d\n", ptr -> data);
}

int main(){
    struct listnode *head = NULL;
    pushHead(&head, 30);
    pushHead(&head, 40);
    pushHead(&head, 50);
    pushHead(&head, 60);
    swapPairs(&head);
    printlist(head);
}