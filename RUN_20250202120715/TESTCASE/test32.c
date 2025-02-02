
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void test_input_and_output() {
    struct Student students[5] = {
        {"Alice", 1, 85.5},
        {"Bob", 2, 90.0},
        {"Charlie", 3, 78.5},
        {"David", 4, 88.0},
        {"Eve", 5, 92.5}
    };

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

void test_edge_cases() {
    struct Student students[5] = {
        {"", 0, 0.0},
        {"LongNameExceedingFiftyCharactersShouldBeTrimmed", 12345, 100.0},
        {"NormalName", -1, -10.0},
        {"", -100, 50.5},
        {"NameWithSpecialChars!@#", 9999, 999.9}
    };

    printf("\nEdge Case Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    test_input_and_output();
    test_edge_cases();
    return 0;
}
