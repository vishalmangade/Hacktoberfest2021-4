class Solution {
public:
    vector<int> v;
    vector<int> preorder(Node* root) {
        pre(root);
        return v;
    }
    
    void pre(Node* root){
        if(!root)
            return;
        
        v.push_back(root->val);
        for(auto e: root->children)
        pre(e);
    }
};