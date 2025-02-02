
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

void test_input_output() {
    struct Student students[5] = {
        {"Alice", 1, 85.5},
        {"Bob", 2, 90.0},
        {"Charlie", 3, 78.5},
        {"David", 4, 88.0},
        {"Eva", 5, 92.5}
    };

    printf("\nStudent Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

void test_custom_input() {
    struct Student students[5];
    strcpy(students[0].name, "Frank");
    students[0].rollNumber = 6;
    students[0].marks = 75.0;

    strcpy(students[1].name, "Grace");
    students[1].rollNumber = 7;
    students[1].marks = 82.0;

    strcpy(students[2].name, "Hannah");
    students[2].rollNumber = 8;
    students[2].marks = 89.5;

    strcpy(students[3].name, "Ian");
    students[3].rollNumber = 9;
    students[3].marks = 91.0;

    strcpy(students[4].name, "Jack");
    students[4].rollNumber = 10;
    students[4].marks = 87.5;

    printf("\nCustom Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    test_input_output();
    test_custom_input();
    return 0;
}
