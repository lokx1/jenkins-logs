
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    int test_values[] = {0, 1, 2, 3, -1, -2, 100, 101, -101, -100};
    int expected_results[] = {0, 1, 0, 1, 1, 0, 0, 1, 1, 0};
    int num_tests = sizeof(test_values) / sizeof(test_values[0]);
    int passed_tests = 0;

    for (int i = 0; i < num_tests; i++) {
        int result = is_odd(test_values[i]);
        if (result == expected_results[i]) {
            printf("Test %d passed: is_odd(%d) = %d\n", i + 1, test_values[i], result);
            passed_tests++;
        } else {
            printf("Test %d failed: is_odd(%d) = %d, expected %d\n", i + 1, test_values[i], result, expected_results[i]);
        }
    }

    printf("%d/%d tests passed.\n", passed_tests, num_tests);
    return 0;
}
