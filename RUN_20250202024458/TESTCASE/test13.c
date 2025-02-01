#include <stdio.h>

void test_loop_unrolling() {
    int sum = 0;
    for (int i = 1; i <= 100; i += 5) {
        sum += i;
        sum += i + 1;
        sum += i + 2;
        sum += i + 3;
        sum += i + 4;
    }
    printf("Sum: %d\n", sum);
}

int main() {
    test_loop_unrolling();
    return 0;
}