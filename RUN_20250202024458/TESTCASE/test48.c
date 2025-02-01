#include <assert.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bigONotation(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("(%d, %d) ", i, j);
        }
        printf("\n");
    }
}

int main() {
    FILE *fp;
    fp = freopen("test.txt", "w", stdout);
    if(fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    bigONotation(5);
    fclose(fp);

    fp = fopen("test.txt", "r");
    if(fp == NULL) {
        printf("Error opening file\n");
        exit(1);
    }

    char line[256];
    int i = 0;
    while(fgets(line, sizeof(line), fp)) {
        for(int j = 0; j < 5; j++) {
            char expected[20];
            sprintf(expected, "(%d, %d) ", i, j);
            assert(strstr(line, expected) != NULL);
        }
        i++;
    }
    fclose(fp);

    printf("Test passed successfully\n");

    return 0;
}