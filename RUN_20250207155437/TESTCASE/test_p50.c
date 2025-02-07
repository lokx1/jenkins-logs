#include <stdio.h>
#include "p50.c"

int main() {
    int num = 1234; // Test input value
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
    return 0;
}