
#include <stdio.h>
#include <stdlib.h>

void test_file_operations() {
    // Test writing to a file
    FILE *filePointer = fopen("test_example.txt", "w");
    if (filePointer == NULL) {
        printf("Test failed: Unable to open file for writing.\n");
        return;
    }
    fprintf(filePointer, "This is a test text written to a file.\n");
    fclose(filePointer);

    // Test appending to a file
    filePointer = fopen("test_example.txt", "a");
    if (filePointer == NULL) {
        printf("Test failed: Unable to open file for appending.\n");
        return;
    }
    fprintf(filePointer, "This line is appended to the test file content.\n");
    fclose(filePointer);

    // Test reading from a file
    char buffer[100];
    filePointer = fopen("test_example.txt", "r");
    if (filePointer == NULL) {
        printf("Test failed: Unable to open file for reading.\n");
        return;
    }
    printf("Test file contents:\n");
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }
    fclose(filePointer);
}

int main() {
    test_file_operations();
    return 0;
}
