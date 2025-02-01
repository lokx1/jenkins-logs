
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    int test_cases[] = {0, 1, 2, 3, -1, -2, -3, 100, 101, -101};
    int expected_results[] = {0, 1, 0, 1, 1, 0, 1, 0, 1, 1};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    int all_passed = 1;

    for (int i = 0; i < num_tests; i++) {
        int result = is_odd(test_cases[i]);
        if (result != expected_results[i]) {
            printf("Test case %d failed: is_odd(%d) returned %d, expected %d\n", i, test_cases[i], result, expected_results[i]);
            all_passed = 0;
        }
    }

    if (all_passed) {
        printf("All test cases passed.\n");
    } else {
        printf("Some test cases failed.\n");
    }

    return 0;
}
