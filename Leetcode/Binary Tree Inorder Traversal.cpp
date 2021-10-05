class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        inorder(root);
        return v;
    }
    
    void inorder(TreeNode* root) {
        if(!root)
            return;
        
        inorder(root->left);
        
        v.push_back(root->val);
        
        inorder(root->right);
    }
};