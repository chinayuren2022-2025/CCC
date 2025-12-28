#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} node;

node* add_node(int data){
    node *p = (node*)malloc(sizeof(node));

    if(p == NULL){
        printf("内存不足！\n");
        exit(1);
    }

    p->data = data;
    p->next = NULL;

    return p;
}

void insert_tail(node *head, int data){
    node *new_node = add_node(data);

    node *p = head;

    while(p->next != NULL){
        p = p->next;
    }

    p->next = new_node;
}

int main(void){
    node *n1 = add_node(10);
    
    insert_tail(n1, 20);
    insert_tail(n1, 20);
    
    node *p = n1;
    while(p != NULL){
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");

    return 0;
}