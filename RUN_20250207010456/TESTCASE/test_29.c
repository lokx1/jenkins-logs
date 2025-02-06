#include <stdio.h>
#include "p44.c"

int main() {
    // Test case 1: Unrolled loop with constant increment
    int sum = 0;
    for (int i = 1; i <= 100; i += 5) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
        sum += i + 4;
    }
    printf("Sum: %d\n", sum);
    if (sum != 5050) {
        printf("Test case 1 failed!\n");
    } else {
        printf("Test case 1 passed!\n");
    }
    
    // Test case 2: Unrolled loop with variable increment
    sum = 0;
    for (int i = 1; i <= 100; i += 3) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
    }
    printf("Sum: %d\n", sum);
    if (sum != 3333) {
        printf("Test case 2 failed!\n");
    } else {
        printf("Test case 2 passed!\n");
    }
    
    // Test case 3: Unrolled loop with non-constant increment
    sum = 0;
    for (int i = 1; i <= 100; i += i) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
    }
    printf("Sum: %d\n", sum);
    if (sum != 3333) {
        printf("Test case 3 failed!\n");
    } else {
        printf("Test case 3 passed!\n");
    }
    
    return 0;
}