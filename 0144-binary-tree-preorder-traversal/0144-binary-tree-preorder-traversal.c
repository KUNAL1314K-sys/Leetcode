/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

void preorder(struct TreeNode* root, int* result, int* returnSize) {
    if (root == NULL) {
        return;
    }

    result[(*returnSize)++] = root->val; 
    preorder(root->left, result, returnSize);
    preorder(root->right, result, returnSize); 
}

int* preorderTraversal(struct TreeNode* root, int* returnSize) {
    int* result = (int*)malloc(100 * sizeof(int));
    *returnSize = 0;

    preorder(root, result, returnSize);

    return result;
}