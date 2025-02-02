
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to create a test file with given content
void createTestFile(const char *fileName, const char *content) {
    FILE *file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Failed to create test file \"%s\".\n", fileName);
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}

// Test case function
void testFileViewer(const char *fileName) {
    char command[150];
    snprintf(command, sizeof(command), "echo \"%s\" | ./file_viewer", fileName);
    system(command);
}

int main() {
    // Create a test file
    const char *testFileName = "testfile.txt";
    const char *testFileContent = "This is a test file.\nIt has multiple lines.\nEnd of file.";
    createTestFile(testFileName, testFileContent);

    // Compile the file viewer program
    system("gcc -o file_viewer file_viewer.c");

    // Run the test case
    testFileViewer(testFileName);

    // Clean up
    remove(testFileName);
    remove("file_viewer");

    return 0;
}
```

To run these test cases, ensure the original file viewer code is saved as `file_viewer.c` in the same directory as this test code. Then compile and execute this test code.