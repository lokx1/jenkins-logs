
#include "stdio.h"

int is_even(int a) {
    return a % 2 == 0;
}

int main() {
    int test_cases[] = {0, 1, -1, 2, -2, 100, 101, -101, 2147483646, 2147483647, -2147483648, -2147483647};
    int num_cases = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_cases; i++) {
        int result = is_even(test_cases[i]);
        printf("is_even(%d) = %d\n", test_cases[i], result);
    }
    
    return 0;
}
