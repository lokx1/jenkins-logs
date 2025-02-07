#include <stdio.h>
#include "p36.c"

int main(void) {
    int argc = 4;
    char *argv[] = {"a", "b", "c", NULL};
    printf("Number of command line arguments: %d\n", argc);
    printf("Command line arguments:\n");
    for (int i = 0; i < argc; i++) {
        printf("%s\n", argv[i]);
    }
    return 0;
}