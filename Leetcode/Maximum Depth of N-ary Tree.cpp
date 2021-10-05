class Solution {
public:
    int mx=0;
    int maxDepth(Node* root) {
        height(root);
        return mx;
    }
    
    void height(Node* root, int h=1) {
        if(!root)
            return;
        
        if(mx<h)
            mx = h;
        
        for(auto e: root->children)
            height(e, h+1);
    }
};