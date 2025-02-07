#include <stdio.h>
#include "p17.c"

int main(void) {
    int argc = 2;
    char *argv[] = {"test", "argument"};
    int result = main(argc, argv);
    printf("Result: %d\n", result);
}