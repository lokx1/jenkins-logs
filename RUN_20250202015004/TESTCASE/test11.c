
#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    int test_cases[] = {0, 1, 2, 3, -2, -3, 100, 101, -100, -101};
    int expected_results[] = {1, 0, 1, 0, 1, 0, 1, 0, 1, 0};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_tests; i++) {
        int result = is_even(test_cases[i]);
        printf("is_even(%d) = %d, expected = %d\n", test_cases[i], result, expected_results[i]);
    }

    return 0;
}
