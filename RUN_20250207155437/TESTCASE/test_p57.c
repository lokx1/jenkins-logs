#include <stdio.h>
#include "p57.c"

int main() {
    int num;
    
    // Test case 1: Prime number input
    printf("Test case 1:\n");
    num = 23;
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    // Test case 2: Non-prime number input
    printf("Test case 2:\n");
    num = 10;
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    // Test case 3: Edge case input
    printf("Test case 3:\n");
    num = 1;
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    return 0;
}