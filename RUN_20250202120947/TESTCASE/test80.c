
#include <stdio.h>

void stringCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; // Append null character at the end
}

int main() {
    // Test case 1: Normal string
    char src1[] = "Hello, world!";
    char dest1[20];
    stringCopy(dest1, src1);
    printf("Test 1 - Copied string: %s\n", dest1);

    // Test case 2: Empty string
    char src2[] = "";
    char dest2[20];
    stringCopy(dest2, src2);
    printf("Test 2 - Copied string: %s\n", dest2);

    // Test case 3: String with spaces
    char src3[] = "  Leading and trailing spaces  ";
    char dest3[40];
    stringCopy(dest3, src3);
    printf("Test 3 - Copied string: %s\n", dest3);

    // Test case 4: String with special characters
    char src4[] = "!@#$%^&*()_+";
    char dest4[20];
    stringCopy(dest4, src4);
    printf("Test 4 - Copied string: %s\n", dest4);

    // Test case 5: Long string
    char src5[] = "This is a very long string that exceeds the usual length.";
    char dest5[60];
    stringCopy(dest5, src5);
    printf("Test 5 - Copied string: %s\n", dest5);

    return 0;
}
