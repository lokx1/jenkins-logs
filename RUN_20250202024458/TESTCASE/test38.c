#include <stdio.h>
#include <string.h>

int main() {
    // Test case for writing to a file
    FILE *filePointer = fopen("test.txt", "w");
    if (filePointer == NULL) {
        printf("Test failed: Unable to open file for writing.\n");
        return 1;
    }
    fprintf(filePointer, "This is a test text written to a file.\n");
    fclose(filePointer);

    // Test case for appending to a file
    filePointer = fopen("test.txt", "a");
    if (filePointer == NULL) {
        printf("Test failed: Unable to open file for appending.\n");
        return 1;
    }
    fprintf(filePointer, "This line is appended to the existing file content.\n");
    fclose(filePointer);

    // Test case for reading from a file
    char buffer[100];
    filePointer = fopen("test.txt", "r");
    if (filePointer == NULL) {
        printf("Test failed: Unable to open file for reading.\n");
        return 1;
    }

    fgets(buffer, sizeof(buffer), filePointer);
    if (strcmp(buffer, "This is a test text written to a file.\n") != 0) {
        printf("Test failed: Unexpected content in file.\n");
        return 1;
    }

    fgets(buffer, sizeof(buffer), filePointer);
    if (strcmp(buffer, "This line is appended to the existing file content.\n") != 0) {
        printf("Test failed: Unexpected content in file.\n");
        return 1;
    }

    fclose(filePointer);

    printf("All tests passed.\n");
    return 0;
}