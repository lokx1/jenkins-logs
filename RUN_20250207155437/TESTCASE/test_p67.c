#include "p67.c"
#include <stdio.h>
#include <stdlib.h>

int main() {
    struct Node *head = NULL;

    // Insert nodes at beginning
    insertAtBeginning(&head, 7);
    insertAtBeginning(&head, 5);
    insertAtBeginning(&head, 3);

    printf("Linked list after insertion: ");
    printList(head);

    // Delete node with key = 5
    deleteNode(&head, 5);
    printf("Linked list after deletion: ");
    printList(head);

    return 0;
}