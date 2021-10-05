class Solution {
public:
    vector<int> v[100001];
    int vis[100001] = {0};
    int sm = 0, cc = 0;
    
    void dfs(int node){
        vis[node]++;
        sm++;
        for(int child : v[node]){
            if(!vis[child])
            dfs(child);
        }
    }
    
    int makeConnected(int n, vector<vector<int>>& connections) {
        if(n>connections.size()+1)
            return -1;
        
        for(auto con : connections){
            v[con[0]].push_back(con[1]);
            v[con[1]].push_back(con[0]);
        }
        
        for(int i=0; i<n; i++) {
            if(!vis[i]) {
                dfs(i);
                cc++;
            }
        }
        
        // sm-=n;
        sm = sm - ((n-1) - (cc-1));
        
        if (sm >= cc-1)
            return cc-1;
        
        return -1;
    }
};