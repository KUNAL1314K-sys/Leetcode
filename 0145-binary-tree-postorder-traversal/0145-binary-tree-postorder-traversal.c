void postorder(struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL)
        return;

    postorder(root->left, result, returnSize);
    postorder(root->right, result, returnSize);
    result[(*returnSize)++] = root->val;
}

int* postorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = malloc(100 * sizeof(int));
    *returnSize = 0;

    postorder(root, result, returnSize);

    return result;
}