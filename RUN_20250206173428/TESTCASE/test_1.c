#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <float.h>
#include "p36.c"
int main(int argc, char *argv[])
{
    assert(argc == 5);
    assert(argc <= INT_MAX);
    assert(argc >= INT_MIN);
    assert(FLT_MIN <= argc && argc <= FLT_MAX);
    assert(strcmp(argv[0], "p36") == 0);
        assert(strlen(argv[i]) > 0);
    }
    return 0;
}