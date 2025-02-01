
#include <stdio.h>
#include <stdlib.h>

// Define structure for a node
struct Node {
    int data;
    struct Node *next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(struct Node **headRef, int newData) {
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    newNode->data = newData;
    newNode->next = *headRef;
    *headRef = newNode;
}

// Function to delete a node with given key from the linked list
void deleteNode(struct Node **headRef, int key) {
    struct Node *prev = NULL;
    struct Node *current = *headRef;
    if (current != NULL && current->data == key) {
        *headRef = current->next;
        free(current);
        return;
    }
    while (current != NULL && current->data != key) {
        prev = current;
        current = current->next;
    }
    if (current == NULL)
        return;
    prev->next = current->next;
    free(current);
}

// Function to print the linked list
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}

int main() {
    struct Node *head = NULL;

    // Test Case 1: Insert nodes at beginning
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printf("Test Case 1 - Linked list after insertion: ");
    printList(head);

    // Test Case 2: Delete node with key = 20
    deleteNode(&head, 20);
    printf("Test Case 2 - Linked list after deleting 20: ");
    printList(head);

    // Test Case 3: Delete node with key = 30
    deleteNode(&head, 30);
    printf("Test Case 3 - Linked list after deleting 30: ");
    printList(head);

    // Test Case 4: Delete node with key = 10
    deleteNode(&head, 10);
    printf("Test Case 4 - Linked list after deleting 10: ");
    printList(head);

    // Test Case 5: Try to delete node with key that doesn't exist
    deleteNode(&head, 40);
    printf("Test Case 5 - Linked list after attempting to delete non-existing 40: ");
    printList(head);

    return 0;
}
