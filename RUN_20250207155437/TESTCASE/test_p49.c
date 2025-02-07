#include <stdio.h>
#include <stdlib.h>
#include "p49.c"

int main() {
    // Test memory allocation and deallocation
    int *ptr = (int *)malloc(sizeof(int) * 5);
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    } else {
        for (int i = 0; i < 5; ++i) {
            ptr[i] = i;
        }
        free(ptr);
    }
    
    // Test memory leak detection
    int *leak_ptr = (int *)malloc(sizeof(int) * 10);
    if (leak_ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    } else {
        for (int i = 0; i < 10; ++i) {
            leak_ptr[i] = i;
        }
    }
    
    // Check if memory is leaked
    int *leak_check = (int *)malloc(sizeof(int) * 5);
    if (leak_check == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    } else {
        for (int i = 0; i < 5; ++i) {
            leak_check[i] = i;
        }
    }
    
    // Free allocated memory
    free(leak_ptr);
    free(leak_check);
    
    return 0;
}