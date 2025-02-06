#include <stdio.h>
#include "p17.c"

int main(void) {
    int argc = 3;
    char *argv[] = {"test", "-a", "arg1"};
    return test_main(argc, argv);
}