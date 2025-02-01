#include <stdio.h>

void test_sum_of_first_10_natural_numbers() {
    int sum = 0;
    for (int i = 1; i <= 10; ++i) {
        sum += i;
    }
    
    if(sum == 55) {
        printf("Test case passed\n");
    } else {
        printf("Test case failed\n");
    }
}

int main() {
    test_sum_of_first_10_natural_numbers();

    return 0;
}