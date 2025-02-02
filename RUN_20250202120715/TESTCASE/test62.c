
#include <stdio.h>
#include <string.h>

int main() {
    // Test Case 1: Concatenating "Hello" and "World"
    char str1[11] = "Hello";  // Ensure enough space for concatenation
    char str2[] = "World";
    strcat(str1, str2);
    printf("Test Case 1 - Concatenated string: %s\n", str1);

    // Test Case 2: Concatenating empty string with "World"
    char str3[6] = "";  // Enough space for "World"
    char str4[] = "World";
    strcat(str3, str4);
    printf("Test Case 2 - Concatenated string: %s\n", str3);

    // Test Case 3: Concatenating "Hello" with empty string
    char str5[6] = "Hello";
    char str6[] = "";
    strcat(str5, str6);
    printf("Test Case 3 - Concatenated string: %s\n", str5);

    // Test Case 4: Concatenating two empty strings
    char str7[1] = "";
    char str8[] = "";
    strcat(str7, str8);
    printf("Test Case 4 - Concatenated string: %s\n", str7);

    // Test Case 5: Concatenating strings with spaces
    char str9[13] = "Hello ";
    char str10[] = "World!";
    strcat(str9, str10);
    printf("Test Case 5 - Concatenated string: %s\n", str9);

    return 0;
}
