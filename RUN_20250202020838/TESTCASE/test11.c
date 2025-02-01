#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    // Test case 1: Even number
    if(is_even(4)) {
        printf("Test case 1 passed\n");
    } else {
        printf("Test case 1 failed\n");
    }

    // Test case 2: Odd number
    if(!is_even(5)) {
        printf("Test case 2 passed\n");
    } else {
        printf("Test case 2 failed\n");
    }

    // Test case 3: Zero
    if(is_even(0)) {
        printf("Test case 3 passed\n");
    } else {
        printf("Test case 3 failed\n");
    }

    // Test case 4: Negative even number
    if(is_even(-6)) {
        printf("Test case 4 passed\n");
    } else {
        printf("Test case 4 failed\n");
    }

    // Test case 5: Negative odd number
    if(!is_even(-7)) {
        printf("Test case 5 passed\n");
    } else {
        printf("Test case 5 failed\n");
    }

    return 0;
}