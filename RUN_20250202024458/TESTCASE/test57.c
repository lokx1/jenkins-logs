Sure, here are some test cases for the given C function:

Test Case 1: Testing with a linked list of size 3 (already provided in the main function)

```c
int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

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

    return 0;
}
```

Test Case 2: Testing with a linked list of size 1

```c
int main() {
    struct Node* head = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = NULL;

    printLinkedList(head);

    free(head);

    return 0;
}
```

Test Case 3: Testing with an empty linked list

```c
int main() {
    struct Node* head = NULL;

    printLinkedList(head);

    return 0;
}
```

Test Case 4: Testing with a linked list of size 5

```c
int main() {
    struct Node* head = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;
    struct Node* fourth = NULL;
    struct Node* fifth = NULL;

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));
    fourth = (struct Node*)malloc(sizeof(struct Node));
    fifth = (struct Node*)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;

    second->data = 2;
    second->next = third;

    third->data = 3;
    third->next = fourth;

    fourth->data = 4;
    fourth->next = fifth;

    fifth->data = 5;
    fifth->next = NULL;

    printLinkedList(head);

    free(head);
    free(second);
    free(third);
    free(fourth);
    free(fifth);

    return 0;
}
