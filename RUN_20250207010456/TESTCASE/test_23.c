#include <stdio.h>
#include <stdbool.h>
#include "p69.c"

int main() {
    struct Queue queue;
    initQueue(&queue);
    
    // Testing enqueue function
    printf("Testing enqueue function:\n");
    enqueue(&queue, 10);
    if (isEmpty(&queue)) {
        printf("Enqueued element: %d\n", peek(&queue));
    } else {
        printf("Queue is not empty!\n");
    }
    
    // Testing dequeue function
    printf("\nTesting dequeue function:\n");
    if (!isEmpty(&queue)) {
        int data = dequeue(&queue);
        printf("Dequeued element: %d\n", data);
    } else {
        printf("Queue is empty!\n");
    }
    
    // Testing peek function
    printf("\nTesting peek function:\n");
    if (!isEmpty(&queue)) {
        int data = peek(&queue);
        printf("Peeked element: %d\n", data);
    } else {
        printf("Queue is empty!\n");
    }
    
    // Testing isEmpty function
    printf("\nTesting isEmpty function:\n");
    if (isEmpty(&queue)) {
        printf("Queue is empty.\n");
    } else {
        printf("Queue is not empty.\n");
    }
    
    // Testing isFull function
    printf("\nTesting isFull function:\n");
    if (isFull(&queue)) {
        printf("Queue is full.\n");
    } else {
        printf("Queue is not full.\n");
    }
    
    return 0;
}