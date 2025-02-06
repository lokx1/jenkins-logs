#include <stdio.h>
#include "p80.c"

int main(void) {
    int argc = 4;
    char *argv[] = {"program", "arg1", "arg2", "arg3"};
    int result = main(argc, argv);
    if (result != 0) {
        printf("Test failed with error code %d\n", result);
        return -1;
    } else {
        printf("Test passed\n");
        return 0;
    }
}