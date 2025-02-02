
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int test_cases[] = {0, 1, 2, 3, 4, 5, 6, 10, 12};
    int num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    for (int i = 0; i < num_test_cases; i++) {
        int num = test_cases[i];
        printf("Factorial of %d: %d\n", num, factorial(num));
    }
    return 0;
}
