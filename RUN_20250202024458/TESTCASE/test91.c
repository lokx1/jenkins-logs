#include <stdio.h>

int main() {
    // Test Case 1: When the file does not exist
    FILE *file1 = fopen("nonexistent_file.txt", "r");
    if (file1 == NULL) {
        perror("Error opening file");
        return 1;
    }
    fclose(file1);

    // Test Case 2: When the file exists
    FILE *file2 = fopen("existent_file.txt", "r");
    if (file2 == NULL) {
        perror("Error opening file");
        return 1;
    }
    fclose(file2);

    return 0;
}