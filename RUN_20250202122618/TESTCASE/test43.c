
#include <stdio.h>

void test_even_numbers() {
    int i;
    printf("Testing first 10 even numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 == 0)
            printf("%d ", i);
    }
    printf("\n");
}

void test_odd_numbers() {
    int i;
    printf("Testing first 10 odd numbers: ");
    for (i = 1; i <= 20; i++) {
        if (i % 2 != 0)
            printf("%d ", i);
    }
    printf("\n");
}

void test_multiples_of_5() {
    int i;
    printf("Testing first 10 multiples of 5: ");
    for (i = 1; i <= 10; i++) {
        printf("%d ", i * 5);
    }
    printf("\n");
}

int main() {
    test_even_numbers();
    test_odd_numbers();
    test_multiples_of_5();
    return 0;
}
