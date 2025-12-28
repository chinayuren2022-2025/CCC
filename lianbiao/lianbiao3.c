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

int main(void){
    node *n1 = add_node(10);
    node *n2 = add_node(20);
    node *n3 = add_node(30);

    n1->next = n2;
    n2->next = n3;
    n3->next = NULL;

    node *p = n1;
    while(p != NULL){
        printf("%d->", p->data);
        p = p->next;
    }
    printf("NULL\n");

    return 0;
}