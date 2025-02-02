
#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Binary tree created successfully!\n");

    // Test case 1: Check root node
    if (root->data == 1) {
        printf("Test 1 passed: Root node is 1\n");
    } else {
        printf("Test 1 failed\n");
    }

    // Test case 2: Check left child of root
    if (root->left->data == 2) {
        printf("Test 2 passed: Left child of root is 2\n");
    } else {
        printf("Test 2 failed\n");
    }

    // Test case 3: Check right child of root
    if (root->right->data == 3) {
        printf("Test 3 passed: Right child of root is 3\n");
    } else {
        printf("Test 3 failed\n");
    }

    // Test case 4: Check left child of left child of root
    if (root->left->left->data == 4) {
        printf("Test 4 passed: Left child of left child of root is 4\n");
    } else {
        printf("Test 4 failed\n");
    }

    // Test case 5: Check right child of left child of root
    if (root->left->right->data == 5) {
        printf("Test 5 passed: Right child of left child of root is 5\n");
    } else {
        printf("Test 5 failed\n");
    }

    // Free allocated memory
    free(root->left->left);
    free(root->left->right);
    free(root->left);
    free(root->right);
    free(root);

    return 0;
}
