#include <stdio.h>
#include "p71.c" // Include the original file as the first line after system includes

int main() {
    int n = 10; // Calculate Fibonacci sequence up to the 10th term
    int i;

    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++) {
        if (fibonacci(i) != -1) { // Check that the function returns a valid value
            printf("%d ", fibonacci(i));
        } else {
            printf("Error: Fibonacci sequence is not defined for negative values\n");
        }
    }
    printf("\n");

    return 0;
}