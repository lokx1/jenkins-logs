#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    // Test case 1: Test with even number
    if(is_even(4)) {
        printf("Test case 1 passed\n");
    } else {
        printf("Test case 1 failed\n");
    }

    // Test case 2: Test with odd number
    if(!is_even(3)) {
        printf("Test case 2 passed\n");
    } else {
        printf("Test case 2 failed\n");
    }

    // Test case 3: Test with zero
    if(is_even(0)) {
        printf("Test case 3 passed\n");
    } else {
        printf("Test case 3 failed\n");
    }

    // Test case 4: Test with negative even number
    if(is_even(-6)) {
        printf("Test case 4 passed\n");
    } else {
        printf("Test case 4 failed\n");
    }

    // Test case 5: Test with negative odd number
    if(!is_even(-5)) {
        printf("Test case 5 passed\n");
    } else {
        printf("Test case 5 failed\n");
    }

    return 0;
}