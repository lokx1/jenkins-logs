#include "p51.c"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num > 0) {
        assert(strcmp(get_result(num), "The number is positive.") == 0);
    } else if (num < 0) {
        assert(strcmp(get_result(num), "The number is negative.") == 0);
    } else {
        assert(strcmp(get_result(num), "The number is zero.") == 0);
    }
    return 0;
}