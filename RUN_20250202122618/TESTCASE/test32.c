
#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[5] = {
        {"Alice", 1, 85.5},
        {"Bob", 2, 92.0},
        {"Charlie", 3, 78.5},
        {"David", 4, 88.0},
        {"Eve", 5, 91.5}
    };
    int i;

    // Print student details
    printf("\nStudent Details:\n");
    for (i = 0; i < 5; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Roll Number: %d\n", students[i].rollNumber);
        printf("Marks: %.2f\n", students[i].marks);
    }

    return 0;
}
