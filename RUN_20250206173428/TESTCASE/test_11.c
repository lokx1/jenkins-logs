#include "p34.c"
#include <stdio.h>
#include <assert.h>
#include <stdbool.h>
#include <limits.h>
#include <float.h>
int main(void)
{
    int matrix[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};
        }
    }
    assert(matrix[2][1] == INT_MAX);
    assert(matrix[0][0] == INT_MIN);
    float f = 3.14;
    assert(fabs(f - 3.14) < FLT_EPSILON);
    return 0;
}