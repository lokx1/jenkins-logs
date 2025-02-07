#include <stdio.h>
#include <stdlib.h>
#include "p73.c"

int main() {
    struct Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    printf("Inorder traversal of BST: ");
    inorderTraversal(root);
    printf("\n");

    root = deleteNode(root, 20);
    printf("Inorder traversal after deletion: ");
    inorderTraversal(root);
    printf("\n");

    struct Node *searchResult = search(root, 40);
    if (searchResult != NULL) {
        printf("Key 40 found in BST\n");
    } else {
        printf("Key 40 not found in BST\n");
    }

    return 0;
}