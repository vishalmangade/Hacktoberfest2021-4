class Solution {
public:
    vector<string> v;
    vector<string> binaryTreePaths(TreeNode* root, string s="") {
        if(root){
            s+=to_string(root->val);
            if(!root->left && !root->right)
                v.push_back(s);
            s+="->";
            binaryTreePaths(root->left, s);
            binaryTreePaths(root->right, s);
        } 
        return v;
    }
};