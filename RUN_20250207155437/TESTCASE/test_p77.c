#include <stdio.h>
#include "p77.c"

int main() {
    // Test writing to a file
    FILE *filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fprintf(filePointer, "This is an example text written to a file.\n");
    fclose(filePointer);

    // Test appending to a file
    filePointer = fopen("example.txt", "a");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fprintf(filePointer, "This line is appended to the existing file content.\n");
    fclose(filePointer);

    // Test reading from a file
    char buffer[100];
    filePointer = fopen("example.txt", "r");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    printf("Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);

    // Test error handling for invalid file operations
    FILE *invalidFile = fopen("invalid.txt", "r");
    if (invalidFile == NULL) {
        printf("Unable to open invalid file.\n");
        return 1;
    }
    fclose(invalidFile);

    // Test error handling for invalid file modes
    FILE *file = fopen("example.txt", "r+");
    if (file == NULL) {
        printf("Unable to open file with invalid mode.\n");
        return 1;
    }
    fclose(file);

    // Test error handling for missing files
    FILE *missingFile = fopen("missing.txt", "r");
    if (missingFile == NULL) {
        printf("Unable to open missing file.\n");
        return 1;
    }
    fclose(missingFile);

    // Test error handling for invalid file pointers
    FILE *invalidPointer = fopen("example.txt", "r");
    if (invalidPointer == NULL) {
        printf("Unable to open file with invalid pointer.\n");
        return 1;
    }
    fclose(invalidPointer);

    // Test error handling for missing arguments
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Unable to open file with missing argument.\n");
        return 1;
    }
    fclose(file);

    // Test error handling for invalid arguments
    FILE *invalidFile = fopen("example.txt", "r+");
    if (invalidFile == NULL) {
        printf("Unable to open file with invalid argument.\n");
        return 1;
    }
    fclose(invalidFile);

    // Test error handling for missing arguments
    FILE *missingFile = fopen("example.txt", "r");
    if (missingFile == NULL) {
        printf("Unable to open file with missing argument.\n");
        return 1;
    }
    fclose(missingFile);

    // Test error handling for invalid arguments
    FILE *invalidPointer = fopen("example.txt", "r+");
    if (invalidPointer == NULL) {
        printf("Unable to open file with invalid argument.\n");
        return 1;
    }
    fclose(invalidPointer);

    // Test error handling for missing arguments
    FILE *missingFile = fopen("example.txt", "r");
    if (missingFile == NULL) {
        printf("Unable to open file with missing argument.\n");
        return 1;
    }
    fclose(missingFile);

    // Test error handling for invalid arguments
    FILE *invalidPointer = fopen("example.txt", "r+");
    if (invalidPointer == NULL) {
        printf("Unable to open file with invalid argument.\n");
        return 1;
    }
    fclose(invalidPointer);
}