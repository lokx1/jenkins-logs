#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

/* Test case for the function */
int main() {
    int *ptr = (int*)malloc(sizeof(int));
    
    /* Test case: Check if memory allocation is successful */
    assert(ptr != NULL);

    *ptr = 10;
    /* Test case: Check if the value assigned is correct */
    assert(*ptr == 10);

    free(ptr);
    
    /* Test case: Check if memory is freed correctly */
    ptr = NULL;
    assert(ptr == NULL);

    printf("All test cases passed.\n");
    
    return 0;
}