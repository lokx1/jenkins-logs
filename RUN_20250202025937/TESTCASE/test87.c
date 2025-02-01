
#include <stdio.h>
#include <stdlib.h>

int main() {
    // A simple file viewer utility
    FILE *filePointer;
    char fileName[100];
    char buffer[1000];

    // Get file name from user
    printf("Enter the name of the file to view: ");
    scanf("%s", fileName);

    // Open the file
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", fileName);
        return 1;
    }

    // Read and display file contents
    printf("Contents of the file \"%s\":\n", fileName);
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    // Close the file
    fclose(filePointer);

    return 0;
}
```

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void create_test_file(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Failed to create test file \"%s\".\n", filename);
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}

int main() {
    const char *testFileName = "testfile.txt";
    const char *testContent = "This is a test file.\nIt contains multiple lines.\nEnd of file.\n";

    // Create a test file
    create_test_file(testFileName, testContent);

    // Run the file viewer program
    FILE *filePointer;
    char buffer[1000];

    filePointer = fopen(testFileName, "r");
    if (filePointer == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", testFileName);
        return 1;
    }

    printf("Contents of the file \"%s\":\n", testFileName);
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);

    // Clean up test file
    remove(testFileName);

    return 0;
}
