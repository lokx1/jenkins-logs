#include <stdio.h>
#include "p57.c"

int main() {
    int num;
    
    // Test case 1: Prime number check
    num = 23;
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    // Test case 2: Non-prime number check
    num = 10;
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    // Test case 3: Edge case check (number <= 1)
    num = 0;
    if (isPrime(num)) {
        printf("%d is prime.\n", num);
    } else {
        printf("%d is not prime.\n", num);
    }
    
    return 0;
}