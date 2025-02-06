#include <stdio.h>
#include <string.h>
#include "p22.c"

int main() {
    char str1[] = "Hello";
    char str2[] = "World";

    // Test case 1: Concatenate two strings and print the result
    printf("Test case 1:\n");
    strcat(str1, str2);
    printf("Concatenated string: %s\n", str1);

    return 0;
}