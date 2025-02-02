
#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 100

// Define structure for queue
struct Queue {
    int arr[MAX_SIZE];
    int front, rear;
};

// Function to initialize queue
void initQueue(struct Queue *queue) {
    queue->front = -1;
    queue->rear = -1;
}

// Function to check if queue is empty
bool isEmpty(struct Queue *queue) {
    return (queue->front == -1 && queue->rear == -1);
}

// Function to check if queue is full
bool isFull(struct Queue *queue) {
    return ((queue->rear + 1) % MAX_SIZE == queue->front);
}

// Function to enqueue element into queue
void enqueue(struct Queue *queue, int data) {
    if (isFull(queue)) {
        printf("Queue is full!\n");
        return;
    }
    if (isEmpty(queue))
        queue->front = queue->rear = 0;
    else
        queue->rear = (queue->rear + 1) % MAX_SIZE;
    queue->arr[queue->rear] = data;
}

// Function to dequeue element from queue
int dequeue(struct Queue *queue) {
    int data;
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    data = queue->arr[queue->front];
    if (queue->front == queue->rear)
        queue->front = queue->rear = -1;
    else
        queue->front = (queue->front + 1) % MAX_SIZE;
    return data;
}

// Function to peek front element of queue
int peek(struct Queue *queue) {
    if (isEmpty(queue)) {
        printf("Queue is empty!\n");
        return -1;
    }
    return queue->arr[queue->front];
}

int main() {
    struct Queue queue;
    initQueue(&queue);

    // Test case 1: Enqueue and Dequeue
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    printf("Front element of queue: %d\n", peek(&queue)); // Expected: 10
    printf("Dequeueing elements from queue: ");
    while (!isEmpty(&queue))
        printf("%d ", dequeue(&queue)); // Expected: 10 20 30
    printf("\n");

    // Test case 2: Dequeue from empty queue
    printf("Dequeue from empty queue: %d\n", dequeue(&queue)); // Expected: Queue is empty!

    // Test case 3: Peek from empty queue
    printf("Peek from empty queue: %d\n", peek(&queue)); // Expected: Queue is empty!

    // Test case 4: Enqueue more than MAX_SIZE elements
    for (int i = 0; i < MAX_SIZE + 1; i++) {
        enqueue(&queue, i);
    }
    printf("Queue should be full: ");
    enqueue(&queue, 101); // Expected: Queue is full!

    return 0;
}
