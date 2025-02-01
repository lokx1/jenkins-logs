
#include <stdio.h>

// Function prototypes
void greet();
void farewell();

// Test case function prototypes
void test_greet();
void test_farewell();

int main() {
    test_greet();
    test_farewell();
    return 0;
}

// Function definitions
void greet() {
    printf("Hello! Welcome to Modular Programming.\n");
}

void farewell() {
    printf("Goodbye! Thank you for using Modular Programming.\n");
}

// Test case for greet function
void test_greet() {
    printf("Testing greet function:\n");
    greet();
}

// Test case for farewell function
void test_farewell() {
    printf("Testing farewell function:\n");
    farewell();
}
