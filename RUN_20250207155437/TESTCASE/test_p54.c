#include <stdio.h>
#include "p54.c"

int main() {
    // Test first 10 even numbers
    int i;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            printf("First 10 even numbers: ");
            printf("%d ", i);
        }
    }
    printf("\n");

    // Test first 10 odd numbers
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            printf("First 10 odd numbers: ");
            printf("%d ", i);
        }
    }
    printf("\n");

    // Test first 10 multiples of 5
    for (i = 1; i <= 10; i++) {
        printf("First 10 multiples of 5: ");
        printf("%d ", i * 5);
    }
    printf("\n");

    return 0;
}