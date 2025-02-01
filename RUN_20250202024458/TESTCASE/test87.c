#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Test case 1: File does not exist
    {
        FILE *fp = fopen("non_existent_file.txt", "w");
        if (fp != NULL) {
            fclose(fp);
            remove("non_existent_file.txt");
        }

        printf("Enter the name of the file to view: ");
        char fileName[100] = "non_existent_file.txt";
        printf("%s\n", fileName);

        FILE *filePointer;
        char buffer[1000];

        filePointer = fopen(fileName, "r");
        if (filePointer == NULL) {
            printf("File \"%s\" not found or could not be opened.\n", fileName);
        } else {
            printf("Test case 1 failed. Expected file not found or could not be opened.\n");
            return 1;
        }
    }

    // Test case 2: File exists and has content
    {
        FILE *fp = fopen("existent_file.txt", "w");
        if (fp != NULL) {
            fputs("Hello, World!", fp);
            fclose(fp);
        } else {
            printf("Test case 2 setup failed. Could not create file.\n");
            return 1;
        }

        printf("Enter the name of the file to view: ");
        char fileName[100] = "existent_file.txt";
        printf("%s\n", fileName);

        FILE *filePointer;
        char buffer[1000];

        filePointer = fopen(fileName, "r");
        if (filePointer == NULL) {
            printf("Test case 2 failed. Expected file to be opened.\n");
            return 1;
        }

        printf("Contents of the file \"%s\":\n", fileName);
        while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
            printf("%s", buffer);
        }

        fclose(filePointer);
        remove("existent_file.txt");
    }

    return 0;
}