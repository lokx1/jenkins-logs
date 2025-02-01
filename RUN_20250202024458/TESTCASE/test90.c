#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/time.h>

// Function to simulate a real-time task
void realTimeTask(int taskNumber, int executionTime) {
    struct timeval start, end;
    gettimeofday(&start, NULL);

    // Simulate task execution
    printf("Executing Real-Time Task %d...\n", taskNumber);
    usleep(executionTime * 1000); // Convert milliseconds to microseconds

    gettimeofday(&end, NULL);
    long elapsedTime = (end.tv_sec - start.tv_sec) * 1000 + (end.tv_usec - start.tv_usec) / 1000;

    printf("Real-Time Task %d completed in %ld milliseconds.\n", taskNumber, elapsedTime);
}

int main() {
    // Test case 1: Real-time task with 100 milliseconds execution time
    realTimeTask(1, 100);

    // Test case 2: Real-time task with 50 milliseconds execution time
    realTimeTask(2, 50);

    // Test case 3: Real-time task with 150 milliseconds execution time
    realTimeTask(3, 150);

    // Test case 4: Real-time task with 0 milliseconds execution time
    realTimeTask(4, 0);

    // Test case 5: Real-time task with negative execution time
    realTimeTask(5, -50);

    return 0;
}