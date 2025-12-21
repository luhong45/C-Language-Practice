#include <stdlib.h>
#include <stdio.h>
struct listnode{
    int val;
    struct listnode *next;
};

struct listnode* deleteduplicate(struct listnode *head){
    struct listnode *curr = head;
    if(head == NULL)return head;
    while(curr){
        if(curr -> next != NULL && curr -> next -> val == curr -> val){
            curr -> next = curr -> next -> next;
        }else{
            curr = curr -> next;
        }
    }
    return head;
}

struct listnode* new_node(int val){
    struct listnode *node = malloc(sizeof(struct listnode));
    node -> val = val;
    node -> next = NULL;
    return node;
}

void printlist(struct listnode *head){
    struct listnode *ptr = head;
    while(ptr){
        printf("%d", ptr -> val);
        ptr = ptr -> next;
    }
    printf("\n");
}

int main(){
    struct listnode* head = new_node(1);
    head -> next =  new_node(1);
    head -> next -> next =  new_node(2);
    head -> next -> next -> next =  new_node(3);
    head -> next -> next -> next -> next=  new_node(4);
    printf("before::");
    printlist(head);

    printf("after::");
    head = deleteduplicate(head);
    printlist(head);
}