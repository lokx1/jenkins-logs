#include <stdio.h>
#include <stdlib.h>
#include "p27.c"

int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    // Test case 1: Create a linked list with three nodes and print it
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = NULL;

    printLinkedList(head);

    free(head);
    free(second);
    free(third);

    // Test case 2: Create a linked list with two nodes and print it
    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = NULL;

    printLinkedList(head);

    free(head);
    free(second);

    // Test case 3: Create a linked list with one node and print it
    head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = NULL;

    printLinkedList(head);

    free(head);

    return 0;
}