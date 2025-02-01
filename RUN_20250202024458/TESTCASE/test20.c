#include <stdio.h>

#define PI 3.14159
#define SQUARE(x) ((x) * (x))

// Test case 1
void test_case_1() {
    printf("Value of PI: %f\n", PI); // Expected Output: 3.141590
    printf("Square of 5: %d\n", SQUARE(5)); // Expected Output: 25
}

// Test case 2
void test_case_2() {
    #ifdef DEBUG
        printf("Debugging information\n"); // This will only print if DEBUG is defined
    #endif

    #ifndef TEST
        printf("Not in test mode\n"); // This will only print if TEST is not defined
    #endif
}

int main() {
    test_case_1();
    test_case_2();
    return 0;
}

/* 
   Copyright (c) 2023
   Mahendra Mahara
*/