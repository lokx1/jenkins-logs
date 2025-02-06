#include <stdio.h>
#include "p72.c" // Include original file as first line after system includes

int main() {
    char src[] = "Hello, world!";
    char dest[20];

    stringCopy(dest, src);

    printf("Copied string: %s\n", dest);

    return 0;
}