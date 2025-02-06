Here is a test case for the given C code that adheres to the constraints you specified:
```
#include <stdio.h>
#include <pthread.h>
#include "p39.c"

int main() {
    pthread_t threads[NUM_THREADS];
    int rc;
    long t;
    
    for (t = 0; t < NUM_THREADS; t++) {
        rc = pthread_create(&threads[t], NULL, printMessage, (void *)t);
        if (rc) {
            printf("Error: Unable to create thread, %d\n", rc);
            return 1;
        }
    }
    
    for (t = 0; t < NUM_THREADS; t++) {
        pthread_join(threads[t], NULL);
    }
    
    printf("All threads completed successfully.\n");
    
    return 0;
}
```