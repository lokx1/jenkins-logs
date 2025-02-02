
#include <stdio.h>
#include <string.h>

int main() {
    // Test Case 1
    char str1[] = "Hello";
    char str2[] = "World";
    strcat(str1, str2);
    printf("Test Case 1 - Concatenated string: %s\n", str1);

    // Test Case 2
    char str3[20] = "Foo";
    char str4[] = "Bar";
    strcat(str3, str4);
    printf("Test Case 2 - Concatenated string: %s\n", str3);

    // Test Case 3
    char str5[30] = "Good";
    char str6[] = "Morning";
    strcat(str5, str6);
    printf("Test Case 3 - Concatenated string: %s\n", str5);

    // Test Case 4
    char str7[50] = "The quick brown ";
    char str8[] = "fox jumps over";
    strcat(str7, str8);
    printf("Test Case 4 - Concatenated string: %s\n", str7);

    // Test Case 5
    char str9[100] = "";
    char str10[] = "Empty start";
    strcat(str9, str10);
    printf("Test Case 5 - Concatenated string: %s\n", str9);

    return 0;
}
