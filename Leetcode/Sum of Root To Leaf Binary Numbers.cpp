class Solution {
public:
    int sum=0;
    int sumRootToLeaf(TreeNode* root, int res=0) {
        if(!root)
            return 0;
        
        res*= 2;
        res+=root->val;
        
        if(!root->left&&!root->right)
            sum+=res;
        
        sumRootToLeaf(root->left, res);
        sumRootToLeaf(root->right, res);
        
        return sum;
    }
};