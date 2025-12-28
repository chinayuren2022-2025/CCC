#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

int main(void){
    struct Node *head = (struct Node*) malloc (sizeof(struct Node ));
    struct Node *first = (struct Node*) malloc (sizeof(struct Node ));
    struct Node *second = (struct Node*) malloc (sizeof(struct Node ));

    head->data = 10;
    first->data = 20;
    second->data = 30;

    head->next = first;
    first->next = second;
    second->next = NULL;

    struct Node *p = head;
    while(p != NULL){
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");

    return 0;
}