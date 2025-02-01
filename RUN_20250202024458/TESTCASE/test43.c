#include <stdio.h>

int main() {
    int i;

    // Test case for first 10 even numbers
    printf("Test case for First 10 even numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\nExpected: 2 4 6 8 10 12 14 16 18 20\n\n");

    // Test case for first 10 odd numbers
    printf("Test case for First 10 odd numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\nExpected: 1 3 5 7 9 11 13 15 17 19\n\n");

    // Test case for first 10 multiples of 5
    printf("Test case for First 10 multiples of 5: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i * 5);
    }
    printf("\nExpected: 5 10 15 20 25 30 35 40 45 50\n\n");

    return 0;
}