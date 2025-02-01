#include <stdio.h>
#include <string.h>
#include <assert.h>

void test_strcat() {
    char str1[20] = "Hello";
    char str2[] = "World";

    strcat(str1, str2);

    assert(strcmp(str1, "HelloWorld") == 0);
}

void test_strcat_empty() {
    char str1[20] = "";
    char str2[] = "World";

    strcat(str1, str2);

    assert(strcmp(str1, "World") == 0);
}

void test_strcat_null() {
    char str1[20] = "Hello";
    char str2[] = "";

    strcat(str1, str2);

    assert(strcmp(str1, "Hello") == 0);
}

int main() {
    test_strcat();
    test_strcat_empty();
    test_strcat_null();

    printf("All test cases passed\n");

    return 0;
}