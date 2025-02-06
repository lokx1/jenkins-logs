#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <float.h>
int main(int argc, char *argv[])
{
    }
    assert(argc >= INT_MIN && argc <= INT_MAX);
    float f = 0.1 f;
    assert(fabs(f - 0.1 f) < FLT_EPSILON);
    return 0;
}
#include "p36.c"
#include <stdio.h>
#include <assert.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    int argc = 0;
    char *argv[] = {};
    assert(argc == 0);
    assert(argc == 1);
    assert(argc == 3);
    assert(argc < 0);
    assert(argc > INT_MAX);
    float f = -0.1 f;
    assert(fabs(f - 0.1 f) < FLT_EPSILON);
    return 0;
}