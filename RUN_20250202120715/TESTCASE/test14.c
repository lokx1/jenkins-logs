
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

// Test case 1: Basic operations
void testCase1() {
    struct Node *head = NULL;
    insertAtBeginning(&head, 10);
    insertAtBeginning(&head, 20);
    insertAtBeginning(&head, 30);
    printf("Test Case 1 - Initial List: ");
    printList(head);
    deleteNode(&head, 20);
    printf("Test Case 1 - After Deletion: ");
    printList(head);
}

// Test case 2: Delete non-existent element
void testCase2() {
    struct Node *head = NULL;
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    printf("Test Case 2 - Initial List: ");
    printList(head);
    deleteNode(&head, 4);
    printf("Test Case 2 - After Attempting to Delete Non-existent Element: ");
    printList(head);
}

// Test case 3: Delete head element
void testCase3() {
    struct Node *head = NULL;
    insertAtBeginning(&head, 100);
    insertAtBeginning(&head, 200);
    insertAtBeginning(&head, 300);
    printf("Test Case 3 - Initial List: ");
    printList(head);
    deleteNode(&head, 300);
    printf("Test Case 3 - After Deleting Head Element: ");
    printList(head);
}

// Test case 4: Empty list
void testCase4() {
    struct Node *head = NULL;
    printf("Test Case 4 - Initial Empty List: ");
    printList(head);
    deleteNode(&head, 5);
    printf("Test Case 4 - After Attempting to Delete from Empty List: ");
    printList(head);
}

int main() {
    testCase1();
    testCase2();
    testCase3();
    testCase4();
    return 0;
}
