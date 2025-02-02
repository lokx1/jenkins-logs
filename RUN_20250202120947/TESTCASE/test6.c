
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int testCases[] = {0, 1, 2, 3, 4, 5, 6, 10, 12};
    int numTestCases = sizeof(testCases) / sizeof(testCases[0]);
    
    for (int i = 0; i < numTestCases; i++) {
        int num = testCases[i];
        printf("Factorial of %d: %d\n", num, factorial(num));
    }
    
    return 0;
}
