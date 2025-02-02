
#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    int test_cases[] = {0, 1, 2, -1, -2, 100, 101, -100, -101};
    int expected_results[] = {1, 0, 1, 0, 1, 1, 0, 1, 0};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    int passed = 1;

    for (int i = 0; i < num_tests; ++i) {
        int result = is_even(test_cases[i]);
        if (result != expected_results[i]) {
            printf("Test case %d failed: is_even(%d) returned %d, expected %d\n", i, test_cases[i], result, expected_results[i]);
            passed = 0;
        }
    }

    if (passed) {
        printf("All test cases passed.\n");
    }

    return 0;
}
