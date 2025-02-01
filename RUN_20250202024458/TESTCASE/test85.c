#include <stdio.h>

int main() {
    /* Test case 1: Input is zero */
    printf("Test case 1: Input is zero\n");
    int num1 = 0;
    printf("Enter a number: ");
    printf("%d\n", num1);
    printf("You entered: %d\n", num1);

    /* Test case 2: Input is a positive number */
    printf("Test case 2: Input is a positive number\n");
    int num2 = 5;
    printf("Enter a number: ");
    printf("%d\n", num2);
    printf("You entered: %d\n", num2);

    /* Test case 3: Input is a negative number */
    printf("Test case 3: Input is a negative number\n");
    int num3 = -3;
    printf("Enter a number: ");
    printf("%d\n", num3);
    printf("You entered: %d\n", num3);

    return 0;
}