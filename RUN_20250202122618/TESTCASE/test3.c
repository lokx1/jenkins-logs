
#include <stdio.h>

int main() {
    // Test case 1: Basic string
    char str1[] = "Hello, world!";
    printf("Test case 1 - String: %s\n", str1);

    // Test case 2: Empty string
    char str2[] = "";
    printf("Test case 2 - String: %s\n", str2);

    // Test case 3: String with spaces
    char str3[] = "   ";
    printf("Test case 3 - String: %s\n", str3);

    // Test case 4: String with special characters
    char str4[] = "!@#$%^&*()_+-=";
    printf("Test case 4 - String: %s\n", str4);

    // Test case 5: String with numeric characters
    char str5[] = "1234567890";
    printf("Test case 5 - String: %s\n", str5);

    // Test case 6: Long string
    char str6[] = "This is a very long string to test the functionality of the string handling.";
    printf("Test case 6 - String: %s\n", str6);

    return 0;
}
