#include <stdio.h>
#include <stdlib.h>
#include "p29.c"

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Binary tree created successfully!\n");

    // Test case 1: Check if the binary tree is created correctly.
    struct Node* current = root;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->left;
    }
    printf("\n");

    // Test case 2: Check if the binary tree is traversed correctly.
    current = root;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->right;
    }
    printf("\n");

    return 0;
}