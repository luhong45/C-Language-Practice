#include <stdlib.h>
#include <stdio.h>
#include <limits.h>

struct listnode{
    int data;
    struct listnode *next;
};

void addAtHead(struct listnode **head, int data){
    struct listnode *new_node = NULL;
    new_node = (struct listnode *)malloc(sizeof(struct listnode));
    if(new_node == NULL) return;
    new_node -> next = *head;
    new_node -> data = data;
    *head = new_node;
}

void addAtTail(struct listnode **head, int data){
    struct listnode *new_node = NULL;
    struct listnode *curr = *head;
    new_node = (struct listnode *)malloc(sizeof(struct listnode));
    while(curr -> next != NULL){
        curr = curr -> next;
    }
    curr -> next = new_node;
}

void deleteNode(struct listnode **head, int data){
    struct listnode *curr = *head;
    struct listnode *prev = NULL;
    while(curr && curr -> data != data){
        prev = curr;
        curr = curr -> next;
    }
    if(curr == NULL){
        printf("node doesn't exists!");
    }else if(curr == *head){
        *head = curr -> next;
        free(curr);
    }else{
        prev -> next = curr -> next;
        free(curr);
    }
}

int getNodeIndex(struct listnode *head, int index){
    struct listnode *curr = head;
    if(index < 0){
        return -1;
    }
    int count = 0;
    while(curr != NULL){
        if(count == index){
            return curr -> data;
        }
        curr = curr -> next;
        count++;
    }
    return -1;
}