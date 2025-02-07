#include "p51.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {
    // Test case 1: Positive number input
    int num = 10;
    printf("Enter a number: ");
    scanf("%d", &num);
    assert(num > 0 && "The number is positive.");
    
    // Test case 2: Negative number input
    num = -5;
    printf("Enter a number: ");
    scanf("%d", &num);
    assert(num < 0 && "The number is negative.");
    
    // Test case 3: Zero input
    num = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    assert(num == 0 && "The number is zero.");
    
    return 0;
}