
#include <stdio.h>

int main() {
    // Test case 1: File exists and contains text
    FILE *fp1 = fopen("example1.txt", "w");
    if (fp1 != NULL) {
        fprintf(fp1, "Hello, World!\nThis is a test file.");
        fclose(fp1);
    }

    FILE *fp;
    char ch;

    fp = fopen("example1.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    // Test case 2: File does not exist
    fp = fopen("nonexistent.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        fclose(fp);
    }

    // Test case 3: File is empty
    FILE *fp2 = fopen("empty.txt", "w");
    if (fp2 != NULL) {
        fclose(fp2);
    }

    fp = fopen("empty.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
    } else {
        while ((ch = fgetc(fp)) != EOF) {
            printf("%c", ch);
        }
        fclose(fp);
    }

    return 0;
}
