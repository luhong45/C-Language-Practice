#include <stdio.h>
#include <stdlib.h>

struct listnode{
    int data;
    struct listnode *next;
};

struct listnode* getInsertionNode(struct listnode *headA, struct listnode *headB){
    struct listnode *curA = headA;
    struct listnode *curB = headB;
    int lenA = 0, lenB = 0;
    while(curA != NULL){
        lenA++;
        curA = curA -> next;
    }
    while(curB != NULL){
        lenB++;
        curB = curB -> next;
    }

    curA = headA;
    curB = headB;
    // swap curA and curB (if lenB > lenA)
    if(lenB > lenA){
        int tmp = lenA;
        lenA = lenB;
        lenB = tmp;

        struct listnode *tmpNode = curA;
        curA = curB;
        curB = tmpNode;
    }
    int gap = lenA - lenB;

    while(gap--){
        curA = curA -> next;
    }
    while(curA){
        if(curA == curB){
            return curA;
        }
        curA = curA -> next;
        curB = curB -> next;
    }
    return NULL;
}

