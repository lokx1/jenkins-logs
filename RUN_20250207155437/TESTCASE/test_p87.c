#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>

#define NUM_THREADS 5

// Function to be executed by each thread
void *threadFunction(void *threadId) {
    long tid = (long)threadId;
    printf("Hello from thread %ld\n", tid);
    pthread_exit(NULL);
}

int main() {
    // Create threads
    for (int t = 0; t < NUM_THREADS; t++) {
        int rc = pthread_create(&threads[t], NULL, threadFunction, (void *)t);
        if (rc) {
            printf("Error: unable to create thread, %d\n", rc);
            exit(EXIT_FAILURE);
        }
    }

    // Wait for all threads to finish
    for (int t = 0; t < NUM_THREADS; t++) {
        pthread_join(threads[t], NULL);
    }

    return 0;
}