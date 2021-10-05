class Solution {
public:
    vector<int> v;
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v1, v2;
        
        leaves(root1, v1);
        leaves(root2, v2);
        
        return v1==v2;
    }
    
    void leaves(TreeNode* root, vector<int>& v) {
        if(!root)
            return;
        
        if(!root->left && !root->right)
            v.push_back(root->val);
        
        leaves(root->left, v);
        leaves(root->right, v);
    }
};