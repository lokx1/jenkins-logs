#include <stdio.h>
#include "p59.c" // Include the original file as the first line after system includes

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (factorial(num) == 120) { // Test case 1: Check if factorial of 5 is correct
        printf("Factorial of %d is %d\n", num, factorial(num));
    } else {
        printf("Test case 1 failed!\n");
    }
    
    if (factorial(6) == 720) { // Test case 2: Check if factorial of 6 is correct
        printf("Factorial of %d is %d\n", num, factorial(num));
    } else {
        printf("Test case 2 failed!\n");
    }
    
    return 0;
}