
#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

void test_factorial() {
    int test_cases[] = {0, 1, 2, 3, 4, 5, 6, 10, 12};
    int expected_results[] = {1, 1, 2, 6, 24, 120, 720, 3628800, 479001600};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    for (int i = 0; i < num_tests; i++) {
        int result = factorial(test_cases[i]);
        printf("factorial(%d) = %d, expected = %d\n", test_cases[i], result, expected_results[i]);
    }
}

int main() {
    test_factorial();
    return 0;
}
