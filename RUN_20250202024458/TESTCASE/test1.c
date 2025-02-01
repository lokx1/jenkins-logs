#include <stdio.h>
#include <assert.h>

int main() {
    FILE *fp;
    char ch;
    char expected_output[] = "Hello World!";
    char actual_output[50];
    int i = 0;

    fp = fopen("example.txt", "w");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    fputs(expected_output, fp);
    fclose(fp);

    fp = fopen("example.txt", "r");
    if(fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }
    while((ch = fgetc(fp)) != EOF) {
        actual_output[i++] = ch;
    }
    actual_output[i] = '\0';
    fclose(fp);

    assert(strcmp(expected_output, actual_output) == 0);

    return 0;
}