#include <stdio.h>
#include "p80.c"

int main(void) {
    int argc = 4;
    char *argv[] = {"program", "arg1", "arg2", "arg3"};
    int result = main(argc, argv);
    printf("Result: %d\n", result);
}