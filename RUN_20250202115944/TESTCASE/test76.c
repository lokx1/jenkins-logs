
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void test_factorial() {
    int test_cases[] = {0, 1, 2, 3, 4, 5, 10};
    int expected_results[] = {1, 1, 2, 6, 24, 120, 3628800};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    int passed = 1;

    for (int i = 0; i < num_tests; i++) {
        int result = factorial(test_cases[i]);
        if (result != expected_results[i]) {
            printf("Test failed for input %d: expected %d, got %d\n", test_cases[i], expected_results[i], result);
            passed = 0;
        }
    }

    if (passed) {
        printf("All tests passed.\n");
    }
}

int main() {
    test_factorial();
    return 0;
}
