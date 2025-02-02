
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Test case function to create a file with given content
void create_test_file(const char *fileName, const char *content) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Error creating test file.\n");
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}

// Test case 1: Test viewing a file with simple content
void test_view_simple_file() {
    const char *testFileName = "testfile1.txt";
    const char *content = "Hello, World!\nThis is a test file.\n";

    create_test_file(testFileName, content);

    FILE *filePointer;
    char buffer[1000];

    filePointer = fopen(testFileName, "r");
    if (filePointer == NULL) {
        printf("Test file \"%s\" not found or could not be opened.\n", testFileName);
        exit(1);
    }

    printf("Contents of the file \"%s\":\n", testFileName);
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);
}

// Test case 2: Test viewing a file with no content (empty file)
void test_view_empty_file() {
    const char *testFileName = "testfile2.txt";
    const char *content = "";

    create_test_file(testFileName, content);

    FILE *filePointer;
    char buffer[1000];

    filePointer = fopen(testFileName, "r");
    if (filePointer == NULL) {
        printf("Test file \"%s\" not found or could not be opened.\n", testFileName);
        exit(1);
    }

    printf("Contents of the file \"%s\":\n", testFileName);
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);
}

// Test case 3: Test viewing a file that does not exist
void test_view_non_existent_file() {
    const char *testFileName = "nonexistent.txt";

    FILE *filePointer;
    char buffer[1000];

    filePointer = fopen(testFileName, "r");
    if (filePointer == NULL) {
        printf("Test file \"%s\" not found or could not be opened.\n", testFileName);
        return;
    }

    printf("Contents of the file \"%s\":\n", testFileName);
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);
}

int main() {
    printf("Running test case 1: View simple file\n");
    test_view_simple_file();

    printf("\nRunning test case 2: View empty file\n");
    test_view_empty_file();

    printf("\nRunning test case 3: View non-existent file\n");
    test_view_non_existent_file();

    return 0;
}
