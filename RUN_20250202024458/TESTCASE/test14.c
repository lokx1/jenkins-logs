Your code is already a complete and functional test case for the linked list operations. It correctly tests the insertion at the beginning, deletion of a node, and traversal (printing) of the linked list.

However, if you want to test the edge cases, you can modify the main function as follows:

```c
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
    printf("Linked list after deletion of 5: ");
    printList(head);

    // Delete node with key = 7
    deleteNode(&head, 7);
    printf("Linked list after deletion of 7: ");
    printList(head);

    // Delete node with key = 3
    deleteNode(&head, 3);
    printf("Linked list after deletion of 3: ");
    printList(head);

    // Try to delete node with key = 10, which is not in the list
    deleteNode(&head, 10);
    printf("Linked list after deletion of 10: ");
    printList(head);

    return 0;
}
```

This code tests the deletion of all nodes in the list and the deletion of a node that does not exist in the list.