class Solution {
public:
    vector<int> v;
    vector<int> postorder(Node* root) {
        post(root);
        return v;
    }
    
    void post(Node* root){
        if(!root)
            return;
        
        for(auto e: root->children)
        post(e);
        
        v.push_back(root->val);
    }
};