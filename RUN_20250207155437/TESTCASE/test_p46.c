#include <stdio.h>
#include "p46.c"

int main() {
    // Test case 1: Sum of first 10 natural numbers
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    
    printf("Sum of first 10 natural numbers: %d\n", sum);
    
    // Test case 2: Sum of first 5 natural numbers
    int sum_part = 0;
    for (int i = 1; i <= 5; ++i) {
        sum_part += i;
    }
    
    printf("Sum of first 5 natural numbers: %d\n", sum_part);
    
    return 0;
}