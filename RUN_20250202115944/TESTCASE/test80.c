
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
    printf("Copied string 1: %s\n", dest1);

    // Test case 2: Empty string
    char src2[] = "";
    char dest2[20];
    stringCopy(dest2, src2);
    printf("Copied string 2: %s\n", dest2);

    // Test case 3: String with spaces
    char src3[] = "Copy this string";
    char dest3[20];
    stringCopy(dest3, src3);
    printf("Copied string 3: %s\n", dest3);

    // Test case 4: String with special characters
    char src4[] = "@#$%^&*()!";
    char dest4[20];
    stringCopy(dest4, src4);
    printf("Copied string 4: %s\n", dest4);

    // Test case 5: Longer string (ensure destination is large enough)
    char src5[] = "This is a longer string than usual.";
    char dest5[40];
    stringCopy(dest5, src5);
    printf("Copied string 5: %s\n", dest5);

    return 0;
}
