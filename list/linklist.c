#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

// append node
void append(struct listnode **head, int data){
    struct listnode *new_node = NULL, *curr = *head;
    new_node = (struct listnode *)malloc(sizeof(struct listnode));
    if(new_node == NULL) return;
    new_node -> data = data;
    new_node -> next = NULL;
    if(curr == NULL){
        *head = new_node;
        return;
    }
    while(curr -> next){
        curr = curr -> next;
    }
    curr -> next = new_node;
}

// delete node
void deletenode(struct listnode **head, int data){
    struct listnode *prev = NULL, *curr = *head;
    while(curr && curr -> data != data){
        prev = curr;
        curr = curr -> next;
    }
    if(curr == NULL){
        printf("node doesn't exists!");
    }else if(*head == curr){
        *head = curr -> next;
        free(curr);
    }else{
        prev -> next = curr -> next;
        free(curr);
    }
}

// push node
void push(struct listnode **head, int data){
    struct listnode *new_node = NULL;
    new_node = (struct listnode *)malloc(sizeof(struct listnode));
    if(new_node == NULL) return;
    new_node -> next = *head;
    new_node -> data = data;
    *head = new_node;
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
    push(&head, 30);
    push(&head, 40);
    push(&head, 50);
    printf("after pushnode:");
    printlist(head);

    append(&head, 60);
    append(&head, 70);
    append(&head, 80);
    printf("after appendnode:");
    printlist(head);

    deletenode(&head, 50);
    printf("after delete node:");
    printlist(head);
}