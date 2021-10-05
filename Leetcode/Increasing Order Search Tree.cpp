class Solution {
public:
    TreeNode* res = new TreeNode(0);
    TreeNode* curr = res;
    TreeNode* increasingBST(TreeNode* root) {
        if(!root)
            return NULL;
        
        increasingBST(root->left);
        
        root->left = NULL;
        curr->right = root;
        curr = root;
        
        increasingBST(root->right);
        
        return res->right;
        
    }
};