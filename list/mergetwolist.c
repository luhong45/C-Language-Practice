#include<stdlib.h>
#include<stdio.h>

struct listnode{
    int data;
    struct listnode *next;
};

struct listnode* mergetwolist(struct listnode *a1, struct listnode *a2){
    struct listnode *ans = (struct listnode *)malloc(sizeof(struct listnode));
    struct listnode *ptr = ans;

    if(a1 == NULL) return a2;
    if(a2 == NULL) return a1;
    while(a1 && a2){
        if(a1 -> data < a2 -> data){
            ptr -> next = a1;
            a1 = a1 -> next;
        }else{
            ptr -> next = a2;
            a2 = a2 -> next;
        }
        ptr = ptr -> next;
    }
    if(a1){
        ptr -> next = a1;
    }else{
        ptr -> next = a2;
    }

    struct listnode *new_head = ans -> next;
    return new_head;
}

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
    struct listnode *a1 = NULL, *a2 = NULL, *head = NULL;
    // append a1
    append(&a1, 1);
    append(&a1, 3);
    append(&a1, 5);
    append(&a1, 7);
    // append a2
    append(&a2, 6);
    append(&a2, 8);
    append(&a2, 9);
    append(&a2, 10);
    // print a1、a2
    printlist(a1);
    printlist(a2);
    // merge list
    head = mergetwolist(a1, a2);
    printlist(head);
}