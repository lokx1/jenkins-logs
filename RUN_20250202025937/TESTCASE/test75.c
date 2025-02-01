
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

    // Test case 1: Enqueue elements and check the front
    enqueue(&queue, 10);
    enqueue(&queue, 20);
    enqueue(&queue, 30);
    printf("Front element after enqueues: %d\n", peek(&queue)); // Expected: 10

    // Test case 2: Dequeue elements and check the order
    printf("Dequeueing elements: ");
    printf("%d ", dequeue(&queue)); // Expected: 10
    printf("%d ", dequeue(&queue)); // Expected: 20
    printf("%d\n", dequeue(&queue)); // Expected: 30

    // Test case 3: Check dequeue on empty queue
    printf("Dequeue on empty queue: %d\n", dequeue(&queue)); // Expected: Queue is empty!

    // Test case 4: Check isEmpty function
    printf("Queue is empty: %s\n", isEmpty(&queue) ? "true" : "false"); // Expected: true

    // Test case 5: Fill the queue and check isFull function
    for (int i = 0; i < MAX_SIZE; i++) {
        enqueue(&queue, i);
    }
    printf("Queue is full: %s\n", isFull(&queue) ? "true" : "false"); // Expected: true

    // Test case 6: Attempt to enqueue to a full queue
    enqueue(&queue, 101); // Expected: Queue is full!

    return 0;
}
