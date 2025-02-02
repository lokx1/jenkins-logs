
#include <stdio.h>

void test_even_numbers() {
    int expected[] = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    int i, index = 0;
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0) {
            if (i != expected[index]) {
                printf("Test failed for even numbers at index %d: expected %d, got %d\n", index, expected[index], i);
                return;
            }
            index++;
        }
    }
    printf("Test passed for even numbers\n");
}

void test_odd_numbers() {
    int expected[] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};
    int i, index = 0;
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0) {
            if (i != expected[index]) {
                printf("Test failed for odd numbers at index %d: expected %d, got %d\n", index, expected[index], i);
                return;
            }
            index++;
        }
    }
    printf("Test passed for odd numbers\n");
}

void test_multiples_of_five() {
    int expected[] = {5, 10, 15, 20, 25, 30, 35, 40, 45, 50};
    int i;
    for (i = 1; i <= 10; i++) {
        int multiple = i * 5;
        if (multiple != expected[i - 1]) {
            printf("Test failed for multiples of 5 at index %d: expected %d, got %d\n", i - 1, expected[i - 1], multiple);
            return;
        }
    }
    printf("Test passed for multiples of 5\n");
}

int main() {
    test_even_numbers();
    test_odd_numbers();
    test_multiples_of_five();
    return 0;
}
