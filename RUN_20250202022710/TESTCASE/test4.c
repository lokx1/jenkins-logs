#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    // Test case 1: The number is odd
    if(is_odd(3)) {
        printf("Test case 1 passed\n");
    } else {
        printf("Test case 1 failed\n");
    }

    // Test case 2: The number is even
    if(!is_odd(4)) {
        printf("Test case 2 passed\n");
    } else {
        printf("Test case 2 failed\n");
    }

    // Test case 3: The number is zero
    if(!is_odd(0)) {
        printf("Test case 3 passed\n");
    } else {
        printf("Test case 3 failed\n");
    }

    // Test case 4: The number is negative and odd
    if(is_odd(-5)) {
        printf("Test case 4 passed\n");
    } else {
        printf("Test case 4 failed\n");
    }

    // Test case 5: The number is negative and even
    if(!is_odd(-6)) {
        printf("Test case 5 passed\n");
    } else {
        printf("Test case 5 failed\n");
    }

    return 0;
}