#include <stdio.h>
#include <stdlib.h>

struct node {
    int value;
    struct node* next;
};
typedef struct node node_t;

void printlist(node_t *head){
    node_t *temporal = head;

    while (temporal != NULL)
    {
        printf("%d - ", temporal->value);
        temporal = temporal->next;
    }
    printf("\n");
}

int main(){
    node_t n1, n2, n3;
    node_t *head;

    n1.value = 45;
    n2.value = 8;
    n3.value =32;

    head = &n3;
    n3.next = &n2;
    n2.next = &n1;
    n1.next = NULL;

    node_t n4;
    n4.value = 13;
    n4.next = &n3;
    n3.next = &n4;

    head = head->next;

    printlist(head);
    return 0;
}