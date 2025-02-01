#include <stdio.h>

int sum(int a, int b) {
    return a + b;
}

void test_sum() {
    int a = 5;
    int b = 10;
    int expected_sum = 15;
    int result = sum(a, b);

    if(result == expected_sum) {
        printf("Test case passed.\n");
    } else {
        printf("Test case failed. Expected %d but got %d\n", expected_sum, result);
    }
}

int main() {
    test_sum();
    return 0;
}