
#include <stdio.h>

// Singleton design pattern
typedef struct {
    int data;
} Singleton;

Singleton* getSingletonInstance() {
    static Singleton instance;
    return &instance;
}

int main() {
    Singleton *singleton1 = getSingletonInstance();
    Singleton *singleton2 = getSingletonInstance();

    printf("Address of singleton1: %p\n", (void*)singleton1);
    printf("Address of singleton2: %p\n", (void*)singleton2);

    // Test case 1: Check if both pointers point to the same instance
    if (singleton1 == singleton2) {
        printf("Test case 1 passed: Both pointers point to the same instance.\n");
    } else {
        printf("Test case 1 failed: Pointers do not point to the same instance.\n");
    }

    // Test case 2: Modify the singleton instance's data and verify
    singleton1->data = 42;
    if (singleton2->data == 42) {
        printf("Test case 2 passed: Data is shared across singleton instances.\n");
    } else {
        printf("Test case 2 failed: Data is not shared across singleton instances.\n");
    }

    return 0;
}
