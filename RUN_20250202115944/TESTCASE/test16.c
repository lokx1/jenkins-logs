
#include <stdio.h>
#include <stdlib.h>

void create_test_file(const char *filename, const char *content) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        printf("Error creating test file!\n");
        exit(1);
    }
    fprintf(file, "%s", content);
    fclose(file);
}

int main() {
    // Test case 1: Empty file
    create_test_file("numbers.txt", "");
    printf("Test case 1: Empty file\n");
    system("./program61");

    // Test case 2: File with one number
    create_test_file("numbers.txt", "42");
    printf("Test case 2: File with one number\n");
    system("./program61");

    // Test case 3: File with multiple numbers
    create_test_file("numbers.txt", "1 2 3 4 5");
    printf("Test case 3: File with multiple numbers\n");
    system("./program61");

    // Test case 4: File with negative numbers
    create_test_file("numbers.txt", "-1 -2 -3");
    printf("Test case 4: File with negative numbers\n");
    system("./program61");

    // Test case 5: File with mixed positive and negative numbers
    create_test_file("numbers.txt", "10 -10 20 -20 30");
    printf("Test case 5: File with mixed positive and negative numbers\n");
    system("./program61");

    return 0;
}
```

Note: This code assumes that the main program code is compiled into an executable named `program61`. Adjust the `system` calls accordingly if the executable has a different name.