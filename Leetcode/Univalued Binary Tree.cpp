class Solution {
public:
    bool isUnivalTree(TreeNode* root) {
        return isUtree(root, root->val);
    }
    
    bool isUtree(TreeNode* root, int val) {
        if(!root)
            return true;
        
        if(root->val!=val)
            return false;
        
        return isUtree(root->left, val) && isUtree(root->right, val);
        
    }
};