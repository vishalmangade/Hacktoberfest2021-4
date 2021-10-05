class Solution {
public:
    vector<double> averageOfLevels(TreeNode* root, int h=0) {
        queue<TreeNode*> q;
        vector<double> v;
        double temp;
        int size, i;
        TreeNode* curr;
        
        q.push(root);
        
        while (!q.empty()) {
            temp = 0;
            size = q.size();
            
            for (i = 0; i < size; i++) {
                curr = q.front();
                q.pop();
                
                if (curr->left) 
                    q.push(curr->left);
                
                if (curr->right) 
                    q.push(curr->right);
                
                temp += curr->val;
            }
            
            v.push_back((double)temp / size);
        }
        
        return v;
    }
};