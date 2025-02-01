
#include "stdio.h"

int is_odd(int a) {
    return a % 2 != 0;
}

int main() {
    printf("Test Case 1: is_odd(1) = %d\n", is_odd(1)); // Expected: 1 (true)
    printf("Test Case 2: is_odd(2) = %d\n", is_odd(2)); // Expected: 0 (false)
    printf("Test Case 3: is_odd(0) = %d\n", is_odd(0)); // Expected: 0 (false)
    printf("Test Case 4: is_odd(-1) = %d\n", is_odd(-1)); // Expected: 1 (true)
    printf("Test Case 5: is_odd(-2) = %d\n", is_odd(-2)); // Expected: 0 (false)
    printf("Test Case 6: is_odd(999999) = %d\n", is_odd(999999)); // Expected: 1 (true)
    printf("Test Case 7: is_odd(-999999) = %d\n", is_odd(-999999)); // Expected: 1 (true)
    printf("Test Case 8: is_odd(1000000) = %d\n", is_odd(1000000)); // Expected: 0 (false)
    return 0;
}
