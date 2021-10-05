class Solution {
public:
    TreeNode* invertTree(TreeNode* root) {
        if (!root)
            return NULL;
        
        // swapping
        TreeNode* temp_right = root->right;
        root->right = invertTree(root->left);
        root->left = invertTree(temp_right);
        
        return root;
    }
};