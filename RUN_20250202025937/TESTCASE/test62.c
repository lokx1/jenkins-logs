
#include <stdio.h>
#include <string.h>

int main() {
    char str1[11] = "Hello"; // Ensure enough space for concatenation
    char str2[] = "World";

    strcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}
