
#include <stdio.h>
#include <string.h>

// Function to test the student structure and print details
void testStudentDetails() {
    struct Student {
        char name[50];
        int rollNumber;
        float marks;
    };

    struct Student students[5] = {
        {"Alice", 1, 85.5},
        {"Bob", 2, 90.0},
        {"Charlie", 3, 78.5},
        {"David", 4, 88.0},
        {"Eve", 5, 92.5}
    };

    printf("\nTest Student Details:\n");
    for (int i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }
}

int main() {
    testStudentDetails();
    return 0;
}
