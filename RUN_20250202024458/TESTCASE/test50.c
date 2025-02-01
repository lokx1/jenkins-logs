#include <stdio.h>
#include <assert.h>

int main() {
    FILE *fp;

    // Test case 1: Open a file that does not exist
    fp = fopen("nonexistent.txt", "r");
    assert(fp == NULL);

    // Test case 2: Open a file that exists
    fp = fopen("existent.txt", "w");
    assert(fp != NULL);
    fclose(fp);

    // Test case 3: Open a file that was just closed
    fp = fopen("existent.txt", "r");
    assert(fp != NULL);
    fclose(fp);

    return 0;
}