
#include <stdio.h>

void testControlFlow(int num) {
    if (num > 0) {
        printf("Number is positive.\n");
    } else if (num < 0) {
        printf("Number is negative.\n");
    } else {
        printf("Number is zero.\n");
    }
}

int main() {
    printf("Test Case 1: num = 10\n");
    testControlFlow(10);
    
    printf("Test Case 2: num = -5\n");
    testControlFlow(-5);
    
    printf("Test Case 3: num = 0\n");
    testControlFlow(0);
    
    printf("Test Case 4: num = 100\n");
    testControlFlow(100);
    
    printf("Test Case 5: num = -100\n");
    testControlFlow(-100);
    
    return 0;
}
