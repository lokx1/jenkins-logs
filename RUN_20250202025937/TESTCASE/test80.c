
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
    char src1[] = "Hello, world!";
    char dest1[20];
    stringCopy(dest1, src1);
    printf("Test 1 - Copied string: %s\n", dest1);

    char src2[] = "";
    char dest2[10];
    stringCopy(dest2, src2);
    printf("Test 2 - Copied string: %s\n", dest2);

    char src3[] = "Short";
    char dest3[10];
    stringCopy(dest3, src3);
    printf("Test 3 - Copied string: %s\n", dest3);

    char src4[] = "Longer string test";
    char dest4[50];
    stringCopy(dest4, src4);
    printf("Test 4 - Copied string: %s\n", dest4);

    char src5[] = "A";
    char dest5[2];
    stringCopy(dest5, src5);
    printf("Test 5 - Copied string: %s\n", dest5);

    return 0;
}
