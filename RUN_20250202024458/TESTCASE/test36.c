#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    // Test case 1: Calculate Fibonacci sequence up to the 5th term
    int n = 5;
    int i;
    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    // Test case 2: Calculate Fibonacci sequence up to the 10th term
    n = 10;
    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    // Test case 3: Calculate Fibonacci sequence up to the 0th term
    n = 0;
    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    // Test case 4: Calculate Fibonacci sequence up to the 1st term
    n = 1;
    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    // Test case 5: Calculate Fibonacci sequence up to the 20th term
    n = 20;
    printf("Fibonacci sequence up to %d terms: ", n);
    for (i = 0; i < n; i++)
        printf("%d ", fibonacci(i));
    printf("\n");

    return 0;
}