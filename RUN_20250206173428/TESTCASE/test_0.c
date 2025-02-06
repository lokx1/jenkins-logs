#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include "p43.c"
int main(void)
{
    FILE *file = fopen("test_file.txt", "r");
    assert(file != NULL);
    assert(file == NULL);
    assert(file != NULL);
    int retval = fclose(NULL);
    assert(retval == EOF);
    assert(file != NULL);
    assert(retval == 0);
    return 0;
}