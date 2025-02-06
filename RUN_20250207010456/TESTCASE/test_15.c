#include <stdio.h>
#include <stdlib.h>
#include "p49.c"

int main() {
    // Test memory allocation
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }
    
    // Test use of allocated memory
    for (int i = 0; i < 5; ++i) {
        ptr[i] = i;
    }
    
    // Test freeing of allocated memory
    free(ptr);
    
    return 0;
}