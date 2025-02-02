
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define structure for stack
struct Stack {
    int arr[MAX_SIZE];
    int top;
};

// Function to initialize stack
void initStack(struct Stack *stack) {
    stack->top = -1;
}

// Function to check if stack is empty
bool isEmpty(struct Stack *stack) {
    return stack->top == -1;
}

// Function to push element onto stack
void push(struct Stack *stack, int data) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow!\n");
        return;
    }
    stack->arr[++stack->top] = data;
}

// Function to pop element from stack
int pop(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow!\n");
        return -1;
    }
    return stack->arr[stack->top--];
}

// Function to peek element from stack
int peek(struct Stack *stack) {
    if (isEmpty(stack)) {
        printf("Stack is empty!\n");
        return -1;
    }
    return stack->arr[stack->top];
}

int main() {
    struct Stack stack;
    initStack(&stack);

    // Test case 1: Push elements onto the stack
    printf("Test Case 1: Pushing elements 10, 20, 30 onto the stack.\n");
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    // Test case 2: Peek the top element
    printf("Test Case 2: Peeking top element. Expected: 30, Got: %d\n", peek(&stack));

    // Test case 3: Pop elements from the stack
    printf("Test Case 3: Popping elements from the stack. Expected: 30 20 10\n");
    while (!isEmpty(&stack)) {
        printf("%d ", pop(&stack));
    }
    printf("\n");

    // Test case 4: Check stack underflow
    printf("Test Case 4: Popping from empty stack. Expected: Stack underflow!\n");
    pop(&stack);

    // Test case 5: Check stack is empty
    printf("Test Case 5: Checking if stack is empty. Expected: 1, Got: %d\n", isEmpty(&stack));

    // Test case 6: Push to full stack
    printf("Test Case 6: Pushing elements until stack overflow.\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        push(&stack, i);
    }
    push(&stack, 101); // This should trigger overflow

    return 0;
}
