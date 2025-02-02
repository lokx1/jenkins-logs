
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create a test file with specified content
void create_test_file(const char *fileName, const char *content) {
    FILE *filePointer = fopen(fileName, "w");
    if (filePointer == NULL) {
        printf("Could not create test file \"%s\".\n", fileName);
        exit(1);
    }
    fputs(content, filePointer);
    fclose(filePointer);
}

int main() {
    // Test case 1: File exists and has content
    const char *testFile1 = "testfile1.txt";
    create_test_file(testFile1, "Hello, World!\nThis is a test file.\n");

    printf("Test Case 1: Viewing \"%s\"\n", testFile1);
    FILE *filePointer1 = fopen(testFile1, "r");
    if (filePointer1 == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", testFile1);
    } else {
        char buffer[1000];
        printf("Contents of the file \"%s\":\n", testFile1);
        while (fgets(buffer, sizeof(buffer), filePointer1) != NULL) {
            printf("%s", buffer);
        }
        fclose(filePointer1);
    }

    // Test case 2: File does not exist
    const char *testFile2 = "nonexistent.txt";
    printf("\nTest Case 2: Viewing \"%s\"\n", testFile2);
    FILE *filePointer2 = fopen(testFile2, "r");
    if (filePointer2 == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", testFile2);
    } else {
        char buffer[1000];
        printf("Contents of the file \"%s\":\n", testFile2);
        while (fgets(buffer, sizeof(buffer), filePointer2) != NULL) {
            printf("%s", buffer);
        }
        fclose(filePointer2);
    }

    // Test case 3: Empty file
    const char *testFile3 = "emptyfile.txt";
    create_test_file(testFile3, "");

    printf("\nTest Case 3: Viewing \"%s\"\n", testFile3);
    FILE *filePointer3 = fopen(testFile3, "r");
    if (filePointer3 == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", testFile3);
    } else {
        char buffer[1000];
        printf("Contents of the file \"%s\":\n", testFile3);
        while (fgets(buffer, sizeof(buffer), filePointer3) != NULL) {
            printf("%s", buffer);
        }
        fclose(filePointer3);
    }

    return 0;
}
