
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct Stack {
    int arr[MAX_SIZE];
    int top;
};

void push(struct Stack* stack, int value) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack Overflow\n");
        return;
    }
    stack->arr[++stack->top] = value;
}

int pop(struct Stack* stack) {
    if (stack->top == -1) {
        printf("Stack Underflow\n");
        exit(1);
    }
    return stack->arr[stack->top--];
}

struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

void enqueue(struct Queue* queue, int value) {
    if ((queue->rear + 1) % MAX_SIZE == queue->front) {
        printf("Queue Overflow\n");
        return;
    }
    queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->arr[queue->rear] = value;
}

int dequeue(struct Queue* queue) {
    if (queue->front == queue->rear) {
        printf("Queue Underflow\n");
        exit(1);
    }
    queue->front = (queue->front + 1) % MAX_SIZE;
    return queue->arr[queue->front];
}

int main() {
    struct Stack stack;
    stack.top = -1;

    printf("Testing Stack Operations:\n");
    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);
    push(&stack, 4);
    push(&stack, 5);
    push(&stack, 6); // Should trigger Stack Overflow

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));
    // printf("Popped element: %d\n", pop(&stack)); // Uncommenting this line will cause Stack Underflow

    struct Queue queue;
    queue.front = 0;
    queue.rear = -1;

    printf("\nTesting Queue Operations:\n");
    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);
    enqueue(&queue, 4);
    enqueue(&queue, 5); // Should trigger Queue Overflow

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));
    // printf("Dequeued element: %d\n", dequeue(&queue)); // Uncommenting this line will cause Queue Underflow

    return 0;
}
