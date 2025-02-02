
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

// Test case 1: Basic operations
void testCase1() {
    struct Stack stack;
    initStack(&stack);

    push(&stack, 10);
    push(&stack, 20);
    push(&stack, 30);

    printf("Test Case 1:\n");
    printf("Top element of stack: %d\n", peek(&stack));

    printf("Popping elements from stack: ");
    while (!isEmpty(&stack))
        printf("%d ", pop(&stack));
    printf("\n");
}

// Test case 2: Underflow
void testCase2() {
    struct Stack stack;
    initStack(&stack);

    printf("Test Case 2:\n");
    printf("Popping from empty stack: ");
    printf("%d\n", pop(&stack));
}

// Test case 3: Overflow
void testCase3() {
    struct Stack stack;
    initStack(&stack);

    printf("Test Case 3:\n");
    for (int i = 0; i < MAX_SIZE + 1; i++) {
        push(&stack, i);
    }
}

int main() {
    testCase1();
    testCase2();
    testCase3();

    return 0;
}
