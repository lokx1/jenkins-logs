#include <stdio.h>
#include "p71.c"

int main() {
    int n = 10; // Calculate Fibonacci sequence up to the 10th term
    int i;

    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++) {
        if (fibonacci(i) != -1) { // Check if the function returns a valid value
            printf("%d ", fibonacci(i));
        } else {
            printf("Error: Invalid input\n");
            return 0;
        }
    }
    printf("\n");

    return 0;
}