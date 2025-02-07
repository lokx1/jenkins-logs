#include <stdio.h>
#include <stdlib.h>
#include "p86.c"

int main() {
    // Test case 1: Viewing an existing file
    FILE *filePointer;
    char fileName[100];
    char buffer[1000];

    strcpy(fileName, "test_file.txt");
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