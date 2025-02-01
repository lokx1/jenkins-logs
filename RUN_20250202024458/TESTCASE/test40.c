/* Test Case 1: Testing with different node values */
int main() {
    struct Node* root = createNode(10);
    root->left = createNode(20);
    root->right = createNode(30);
    root->left->left = createNode(40);
    root->left->right = createNode(50);

    printf("Binary tree created successfully!\n");

    return 0;
}

/* Test Case 2: Testing with negative node values */
int main() {
    struct Node* root = createNode(-1);
    root->left = createNode(-2);
    root->right = createNode(-3);
    root->left->left = createNode(-4);
    root->left->right = createNode(-5);

    printf("Binary tree created successfully!\n");

    return 0;
}

/* Test Case 3: Testing with zero as node value */
int main() {
    struct Node* root = createNode(0);
    root->left = createNode(0);
    root->right = createNode(0);
    root->left->left = createNode(0);
    root->left->right = createNode(0);

    printf("Binary tree created successfully!\n");

    return 0;
}

/* Test Case 4: Testing with only one node */
int main() {
    struct Node* root = createNode(1);

    printf("Binary tree created successfully!\n");

    return 0;
}