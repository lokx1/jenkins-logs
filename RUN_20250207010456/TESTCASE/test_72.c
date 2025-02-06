#include "p68.c"
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
    struct Stack stack;
    initStack(&stack);

    // Test push function
    printf("Testing push function:\n");
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        push(&stack, i);
        if (!isEmpty(&stack)) {
            printf("Stack size: %d\n", stack.top + 1);
            printf("Top element of stack: %d\n", peek(&stack));
        } else {
            printf("Stack is empty!\n");
        }
    }
    if (isEmpty(&stack)) {
        printf("Stack underflow!\n");
    }

    // Test pop function
    printf("\nTesting pop function:\n");
    while (!isEmpty(&stack)) {
        int data = pop(&stack);
        if (data != -1) {
            printf("Popped element: %d\n", data);
        } else {
            printf("Stack underflow!\n");
            break;
        }
    }
    if (!isEmpty(&stack)) {
        printf("Stack is not empty!\n");
    }

    // Test peek function
    printf("\nTesting peek function:\n");
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        int data = peek(&stack);
        if (data != -1) {
            printf("Top element of stack: %d\n", data);
        } else {
            printf("Stack is empty!\n");
            break;
        }
    }
    if (!isEmpty(&stack)) {
        printf("Stack underflow!\n");
    }

    // Test isEmpty function
    printf("\nTesting isEmpty function:\n");
    for (int i = 0; i < MAX_SIZE - 1; i++) {
        bool empty = isEmpty(&stack);
        if (!empty) {
            printf("Stack is not empty!\n");
        } else {
            printf("Stack is empty!\n");
        }
    }
    if (isEmpty(&stack)) {
        printf("Stack underflow!\n");
    }

    return 0;
}