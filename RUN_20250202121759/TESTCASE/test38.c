
#include <stdio.h>

void test_file_write() {
    FILE *filePointer = fopen("test_write.txt", "w");
    if (filePointer == NULL) {
        printf("Test Write: Unable to open file.\n");
        return;
    }
    fprintf(filePointer, "Writing test data to file.\n");
    fclose(filePointer);

    filePointer = fopen("test_write.txt", "r");
    if (filePointer == NULL) {
        printf("Test Write: Unable to open file for reading.\n");
        return;
    }
    char buffer[50];
    fgets(buffer, sizeof(buffer), filePointer);
    fclose(filePointer);

    if (strcmp(buffer, "Writing test data to file.\n") == 0) {
        printf("Test Write: Passed\n");
    } else {
        printf("Test Write: Failed\n");
    }
}

void test_file_append() {
    FILE *filePointer = fopen("test_append.txt", "w");
    if (filePointer == NULL) {
        printf("Test Append: Unable to open file.\n");
        return;
    }
    fprintf(filePointer, "Initial line.\n");
    fclose(filePointer);

    filePointer = fopen("test_append.txt", "a");
    if (filePointer == NULL) {
        printf("Test Append: Unable to open file for appending.\n");
        return;
    }
    fprintf(filePointer, "Appended line.\n");
    fclose(filePointer);

    filePointer = fopen("test_append.txt", "r");
    if (filePointer == NULL) {
        printf("Test Append: Unable to open file for reading.\n");
        return;
    }
    char buffer[100];
    fread(buffer, sizeof(char), 100, filePointer);
    fclose(filePointer);

    if (strstr(buffer, "Initial line.\nAppended line.\n") != NULL) {
        printf("Test Append: Passed\n");
    } else {
        printf("Test Append: Failed\n");
    }
}

void test_file_read() {
    FILE *filePointer = fopen("test_read.txt", "w");
    if (filePointer == NULL) {
        printf("Test Read: Unable to open file.\n");
        return;
    }
    fprintf(filePointer, "Read this line.\n");
    fclose(filePointer);

    filePointer = fopen("test_read.txt", "r");
    if (filePointer == NULL) {
        printf("Test Read: Unable to open file for reading.\n");
        return;
    }
    char buffer[50];
    fgets(buffer, sizeof(buffer), filePointer);
    fclose(filePointer);

    if (strcmp(buffer, "Read this line.\n") == 0) {
        printf("Test Read: Passed\n");
    } else {
        printf("Test Read: Failed\n");
    }
}

int main() {
    test_file_write();
    test_file_append();
    test_file_read();
    return 0;
}
