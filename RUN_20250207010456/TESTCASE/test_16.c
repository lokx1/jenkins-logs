#include <stdio.h>
#include "p47.c"

int main() {
    // Test cases
    int test_cases[] = {0, 1, 5, 10};
    
    for (int i = 0; i < sizeof(test_cases) / sizeof(test_cases[0]); ++i) {
        int n = test_cases[i];
        printf("Factorial of %d: %d\n", n, factorial(n));
    }
    
    return 0;
}