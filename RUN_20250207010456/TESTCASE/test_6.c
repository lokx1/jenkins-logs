#include <stdio.h>
#include "p54.c"

int main() {
    // Test case 1: Print first 10 even numbers, first 10 odd numbers, and first 10 multiples of 5
    int i;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("First 10 even numbers: ");
            printf("%d ", i);
        } else if (i % 2 != 0) {
            printf("First 10 odd numbers: ");
            printf("%d ", i);
        } else {
            printf("First 10 multiples of 5: ");
            printf("%d ", i * 5);
        }
    }
    return 0;
}