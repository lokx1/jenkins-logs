#include <stdio.h>
#include <string.h>
#include <assert.h>

void stringCopy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        src++;
        dest++;
    }
    *dest = '\0'; // Append null character at the end
}

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    stringCopy(dest, src);
    printf("Copied string: %s\n", dest);
    assert(strcmp(dest, "Hello, world!") == 0);

    char src2[] = "Test string.";
    char dest2[20];

    stringCopy(dest2, src2);
    printf("Copied string: %s\n", dest2);
    assert(strcmp(dest2, "Test string.") == 0);

    char src3[] = "";
    char dest3[20] = "Initial string";

    stringCopy(dest3, src3);
    printf("Copied string: %s\n", dest3);
    assert(strcmp(dest3, "") == 0);

    return 0;
}