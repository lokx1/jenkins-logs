#include <stdio.h>
#include <string.h>

void test_main() {
    char str[] = "Hello, world!";
    char expected[] = "Hello, world!";

    printf("Test 1: ");
    if (strcmp(str, expected) == 0) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    char str2[] = "Test string 2";
    char expected2[] = "Test string 2";

    printf("Test 2: ");
    if (strcmp(str2, expected2) == 0) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }

    char str3[] = "Another test string";
    char expected3[] = "Another test string";

    printf("Test 3: ");
    if (strcmp(str3, expected3) == 0) {
        printf("Passed\n");
    } else {
        printf("Failed\n");
    }
}

int main() {
    test_main();
    return 0;
}