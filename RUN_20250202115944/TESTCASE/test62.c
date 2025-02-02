
#include <stdio.h>
#include <string.h>

int main() {
    // Test case 1: Basic concatenation
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);
    printf("Test case 1 - Concatenated string: %s\n", str1);

    // Test case 2: Concatenating with an empty string
    char str3[20] = "Hello";
    char str4[] = "";
    strcat(str3, str4);
    printf("Test case 2 - Concatenated string: %s\n", str3);

    // Test case 3: Concatenating an empty string with a non-empty string
    char str5[20] = "";
    char str6[] = "World";
    strcat(str5, str6);
    printf("Test case 3 - Concatenated string: %s\n", str5);

    // Test case 4: Concatenating strings with spaces
    char str7[30] = "Hello ";
    char str8[] = "World";
    strcat(str7, str8);
    printf("Test case 4 - Concatenated string: %s\n", str7);

    // Test case 5: Concatenating strings with special characters
    char str9[30] = "Hello@";
    char str10[] = "#World!";
    strcat(str9, str10);
    printf("Test case 5 - Concatenated string: %s\n", str9);

    return 0;
}
