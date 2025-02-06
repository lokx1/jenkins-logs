#include "p28.c"

int main() {
    struct Stack stack;
    stack.top = -1;

    push(&stack, 1);
    push(&stack, 2);
    push(&stack, 3);

    printf("Popped element: %d\n", pop(&stack));
    printf("Popped element: %d\n", pop(&stack));

    struct Queue queue;
    queue.front = 0;
    queue.rear = -1;

    enqueue(&queue, 1);
    enqueue(&queue, 2);
    enqueue(&queue, 3);

    printf("Dequeued element: %d\n", dequeue(&queue));
    printf("Dequeued element: %d\n", dequeue(&queue));

    return 0;
}