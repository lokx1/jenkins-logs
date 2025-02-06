#include <stdio.h>
#include <stdlib.h>
#include "p86.c"

int main() {
    // Test case 1: Valid file name and contents are displayed correctly
    FILE *filePointer;
    char fileName[100] = "test_file.txt";
    char buffer[1000];

    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", fileName);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);

    // Test case 2: Invalid file name and error message is displayed correctly
    fileName[0] = 'i'; // invalid character in file name
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", fileName);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);

    // Test case 3: File not found and error message is displayed correctly
    fileName[0] = 'a'; // non-existent file name
    filePointer = fopen(fileName, "r");
    if (filePointer == NULL) {
        printf("File \"%s\" not found or could not be opened.\n", fileName);
        return 1;
    }

    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        printf("%s", buffer);
    }

    fclose(filePointer);
}