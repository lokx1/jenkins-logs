
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Test case 1: Basic file operations - writing, appending, reading
    FILE *filePointer = fopen("testfile1.txt", "w");
    if (filePointer == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }
    fprintf(filePointer, "Test case 1: Writing initial text to the file.\n");
    fclose(filePointer);

    filePointer = fopen("testfile1.txt", "a");
    if (filePointer == NULL) {
        printf("Unable to open file for appending.\n");
        return 1;
    }
    fprintf(filePointer, "Test case 1: Appending this line to the file.\n");
    fclose(filePointer);

    char buffer[100];
    filePointer = fopen("testfile1.txt", "r");
    if (filePointer == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }
    printf("Test case 1: Contents of the file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);

    // Test case 2: File does not exist
    filePointer = fopen("nonexistent.txt", "r");
    if (filePointer == NULL) {
        printf("Test case 2: Correctly handled nonexistent file.\n");
    } else {
        fclose(filePointer);
    }

    // Test case 3: Large buffer read
    filePointer = fopen("testfile2.txt", "w");
    if (filePointer == NULL) {
        printf("Unable to open file for writing.\n");
        return 1;
    }
    for (int i = 0; i < 1000; i++) {
        fprintf(filePointer, "Line %d: This is a line of text.\n", i);
    }
    fclose(filePointer);

    filePointer = fopen("testfile2.txt", "r");
    if (filePointer == NULL) {
        printf("Unable to open file for reading.\n");
        return 1;
    }
    printf("Test case 3: Reading large file:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);

    return 0;
}
