#include <stdio.h>
#include "p77.c"

int main() {
    // Testing writing to a file
    FILE *filePointer = fopen("example.txt", "w");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fprintf(filePointer, "This is an example text written to a file.\n");
    fclose(filePointer);
    
    // Testing appending to a file
    filePointer = fopen("example.txt", "a");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fprintf(filePointer, "This line is appended to the existing file content.\n");
    fclose(filePointer);
    
    // Testing reading from a file
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
    
    // Testing error handling for non-existent files
    filePointer = fopen("non_existent.txt", "r");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fclose(filePointer);
    
    // Testing error handling for invalid modes
    filePointer = fopen("example.txt", "invalid_mode");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fclose(filePointer);
    
    // Testing error handling for invalid arguments
    filePointer = fopen(NULL, "r");
    if (filePointer == NULL) {
        printf("Unable to open file.\n");
        return 1;
    }
    fclose(filePointer);
    
    return 0;
}