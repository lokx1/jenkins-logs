
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

void printInOrder(struct Node* node) {
    if (node == NULL) {
        return;
    }
    printInOrder(node->left);
    printf("%d ", node->data);
    printInOrder(node->right);
}

void freeTree(struct Node* node) {
    if (node == NULL) {
        return;
    }
    freeTree(node->left);
    freeTree(node->right);
    free(node);
}

int main() {
    struct Node* root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);

    printf("Binary tree created successfully!\n");

    printf("In-order traversal: ");
    printInOrder(root);
    printf("\n");

    freeTree(root);

    return 0;
}
