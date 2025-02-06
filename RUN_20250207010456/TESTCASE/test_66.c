#include <stdio.h>
#include "p76.c"

int main() {
    int price[] = {1, 5, 8, 9, 10, 17, 17, 20};
    int n = sizeof(price) / sizeof(price[0]);

    // Test case 1: Rod length of 3
    printf("Maximum obtainable value by cutting a rod of length %d: %d\n", 3, rodCutting(price, 3));

    // Test case 2: Rod length of 4
    printf("Maximum obtainable value by cutting a rod of length %d: %d\n", 4, rodCutting(price, 4));

    // Test case 3: Rod length of 5
    printf("Maximum obtainable value by cutting a rod of length %d: %d\n", 5, rodCutting(price, 5));

    return 0;
}