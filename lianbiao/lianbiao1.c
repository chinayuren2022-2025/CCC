#include <stdio.h>
struct Node {
    int data;
    struct Node *next;
};

int main(void){
    struct Node n1;
    struct Node n2;
    struct Node n3;

    n1.data = 10;
    n2.data = 20;
    n3.data = 30;
    
    n1.next = &n2;
    n2.next = &n3;
    n3.next = NULL;

    struct Node* p = &n1;
    while (p != NULL){
        printf("%d ->", p->data);
        p = p->next;
    }
    printf("NULL\n");

    return 0;
}