
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    char ch;

    // Create and write to example.txt for testing
    fp = fopen("example.txt", "w");
    if (fp == NULL) {
        printf("Error creating file.\n");
        return 1;
    }
    fprintf(fp, "Hello, World!\nThis is a test file.\n");
    fclose(fp);

    // Open the file for reading
    fp = fopen("example.txt", "r");
    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read and print the content of the file
    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    // Remove the test file
    if (remove("example.txt") != 0) {
        printf("Error deleting file.\n");
    }

    return 0;
}
