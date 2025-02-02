
#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    int test_cases[] = {0, 1, 2, -1, -2, 100, 101, -100, -101};
    size_t num_test_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (size_t i = 0; i < num_test_cases; ++i) {
        int result = is_even(test_cases[i]);
        printf("is_even(%d) = %d\n", test_cases[i], result);
    }

    return 0;
}
