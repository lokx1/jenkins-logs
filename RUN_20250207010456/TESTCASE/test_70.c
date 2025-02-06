#include <stdio.h>
#include "p18.c"

int main() {
    FILE *fp;
    fp = fopen("nonexistent.txt", "r");
    if (fp == NULL) {
        perror("Error");
        return 1;
    }
    fclose(fp);
    return 0;
}