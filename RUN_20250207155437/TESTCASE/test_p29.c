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
    struct Node* node = root;
    while (node != NULL) {
        printf("%d ", node->data);
        node = node->left;
    }
    printf("\n");

    // Test case 2: Check if the binary tree is traversed correctly.
    inorderTraversal(root, printNode);
    printf("\n");

    return 0;
}