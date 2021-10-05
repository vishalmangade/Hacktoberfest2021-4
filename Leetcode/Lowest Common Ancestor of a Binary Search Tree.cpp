class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(!root)
            return NULL;
        
        if(root->val==p->val || root->val==q->val)
            return root;
        
        if(root->val<max(p->val,q->val) && root->val>min(p->val,q->val))
            return root;
        
        // both are less than root then lca is left side
        if(root->val >max(p->val,q->val))
            return lowestCommonAncestor(root->left,p,q);
        
        return lowestCommonAncestor(root->right,p,q);
    }
};