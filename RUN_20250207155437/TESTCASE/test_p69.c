#include <stdio.h>
#include "p69.c"

int main() {
    struct Queue queue;
    initQueue(&queue);

    // Testing enqueue function
    printf("Testing enqueue function\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        enqueue(&queue, i * 10);
        if (!isEmpty(&queue)) {
            printf("Enqueued %d\n", peek(&queue));
        } else {
            printf("Queue is empty!\n");
        }
    }
    // Testing dequeue function
    printf("\nTesting dequeue function\n");
    while (!isEmpty(&queue)) {
        int data = dequeue(&queue);
        if (data != -1) {
            printf("Dequeued %d\n", data);
        } else {
            printf("Queue is empty!\n");
        }
    }
    // Testing peek function
    printf("\nTesting peek function\n");
    for (int i = 0; i < MAX_SIZE; i++) {
        int data = peek(&queue);
        if (data != -1) {
            printf("Peeked %d\n", data);
        } else {
            printf("Queue is empty!\n");
        }
    }
    return 0;
}