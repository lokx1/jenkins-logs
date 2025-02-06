#include "p36.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
    char *argv[] = {"test", "hello", "world"};
    int argc = 3;
    printf("Number of command line arguments: %d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}