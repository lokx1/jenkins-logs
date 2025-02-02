
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

    // Test Case 1: Push elements onto the stack
    printf("Test Case 1: Push elements\n");
    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);
    printf("Expected Top Element: 30, Actual: %d\n", peek(&stack));

    // Test Case 2: Pop elements from the stack
    printf("Test Case 2: Pop elements\n");
    printf("Expected: 30, Actual: %d\n", pop(&stack));
    printf("Expected: 20, Actual: %d\n", pop(&stack));
    printf("Expected: 10, Actual: %d\n", pop(&stack));
    printf("Expected: Stack underflow!, Actual: ");
    pop(&stack);

    // Test Case 3: Peek element from an empty stack
    printf("Test Case 3: Peek on empty stack\n");
    printf("Expected: Stack is empty!, Actual: ");
    peek(&stack);

    // Test Case 4: Check if the stack is empty
    printf("Test Case 4: Check empty\n");
    printf("Expected: 1, Actual: %d\n", isEmpty(&stack));

    // Test Case 5: Push elements beyond the stack capacity
    printf("Test Case 5: Push beyond capacity\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        push(&stack, i);
    }
    printf("Expected: Stack overflow!, Actual: ");
    push(&stack, 101);

    return 0;
}
