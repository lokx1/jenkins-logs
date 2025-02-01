Here are some test cases for the C function:

```C
#include <stdio.h>

struct Student {
    char name[50];
    int rollNumber;
    float marks;
};

int main() {
    struct Student students[5] = {
        {"John", 1, 85.5},
        {"Jane", 2, 90.0},
        {"Jim", 3, 78.5},
        {"Jill", 4, 92.0},
        {"Jerry", 5, 88.5}
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
```

In this test case, we have predefined the student details in the array of `students` structure. Then, we are just printing the details of the students. This will help us to validate if the structure and the print statements are working as expected.