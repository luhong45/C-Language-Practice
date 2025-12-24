#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

// remove node (from nth end)
void removeNthFromEnd(struct listnode **head, int n){
    struct listnode *newnode = NULL;
    newnode = (struct listnode *)malloc(sizeof(struct listnode));
    newnode -> next = *head;
    struct listnode *slow = newnode;
    struct listnode *fast = newnode;
    while(n-- && fast){
        fast = fast -> next;
    }
    fast = fast -> next; // work n+1
    while(fast){
        fast = fast -> next;
        slow = slow -> next;
    }
    slow -> next = slow -> next -> next;
}

// push node
void pushHead(struct listnode **head, int data){
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
    pushHead(&head, 30);
    pushHead(&head, 20);
    pushHead(&head, 10);

    printlist(head);
    removeNthFromEnd(&head, 2);
    printlist(head);
}