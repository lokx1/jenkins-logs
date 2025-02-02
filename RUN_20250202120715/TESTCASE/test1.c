
#include <stdio.h>

void create_test_file(const char *filename, const char *content) {
    FILE *fp = fopen(filename, "w");
    if (fp == NULL) {
        printf("Error creating test file.\n");
        return;
    }
    fprintf(fp, "%s", content);
    fclose(fp);
}

int main() {
    // Create a test file with some content
    create_test_file("example.txt", "Hello, World!\nThis is a test file.\n");

    FILE *fp;
    char ch;

    fp = fopen("example.txt", "r");

    if (fp == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}
