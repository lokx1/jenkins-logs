
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    int test_cases[] = {0, 1, 2, 3, 4, 5, -1, -2, -3, -4, -5, 1000, 1001, -1000, -1001};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);

    for (int i = 0; i < num_cases; i++) {
        int result = is_odd(test_cases[i]);
        printf("is_odd(%d) = %d\n", test_cases[i], result);
    }

    return 0;
}
