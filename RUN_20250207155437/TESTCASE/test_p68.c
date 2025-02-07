#include <stdio.h>
#include <stdbool.h>
#include "p68.c"

int main() {
    struct Stack stack;
    initStack(&stack);

    // Testing push function
    printf("Testing push function:\n");
    for (int i = 0; i < 10; i++) {
        push(&stack, i * 10);
        printf("Pushed %d onto stack\n", i * 10);
    }
    if (!isEmpty(&stack)) {
        printf("Stack is not empty!\n");
    } else {
        printf("Stack is empty!\n");
    }

    // Testing pop function
    printf("\nTesting pop function:\n");
    while (!isEmpty(&stack)) {
        int data = pop(&stack);
        if (data != -1) {
            printf("Popped %d from stack\n", data);
        } else {
            printf("Stack underflow!\n");
        }
    }
    if (!isEmpty(&stack)) {
        printf("Stack is not empty!\n");
    } else {
        printf("Stack is empty!\n");
    }

    // Testing peek function
    printf("\nTesting peek function:\n");
    int data = peek(&stack);
    if (data != -1) {
        printf("Peeked %d from stack\n", data);
    } else {
        printf("Stack is empty!\n");
    }

    return 0;
}