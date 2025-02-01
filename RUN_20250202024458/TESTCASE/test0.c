Your code is complete and correct, so there is no need for changes or additions. Here are the test cases:

```c
#include <assert.h>

int main() {
    struct Node *root = NULL;
    root = insert(root, 50);
    assert(root->data == 50);
    
    insert(root, 30);
    assert(root->left->data == 30);
    
    insert(root, 20);
    assert(root->left->left->data == 20);
    
    insert(root, 40);
    assert(root->left->right->data == 40);
    
    insert(root, 70);
    assert(root->right->data == 70);
    
    insert(root, 60);
    assert(root->right->left->data == 60);
    
    insert(root, 80);
    assert(root->right->right->data == 80);
    
    root = deleteNode(root, 20);
    assert(root->left->left == NULL);
    
    struct Node *searchResult = search(root, 40);
    assert(searchResult != NULL);
    assert(searchResult->data == 40);
    
    searchResult = search(root, 20);
    assert(searchResult == NULL);
    
    return 0;
}
```

This test case verifies that the insert, delete, and search operations are working correctly by inserting nodes into the tree, deleting a node, and searching for nodes. The `assert` statements are used to check that the expected results are returned. If any of the `assert` conditions are not met, the program will terminate with an error message.