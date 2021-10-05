class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        for(int r = 0; r < grid.size(); ++r)
                for(int c = 0; c < grid[0].size(); ++c)
                    if(grid[r][c] == 1) 
                        return perimeter(grid, r, c);
        
        return 0;
    }
    
    int perimeter(vector<vector<int>>& grid, int r, int c) {
            if(r < 0 || r >= grid.size() || c < 0 || c >= grid[0].size() || grid[r][c] == 0)
                return 1;
        
            if(grid[r][c] == -1) 
                return 0;
        
            grid[r][c] = -1; //visited
        
            return  perimeter(grid, r+1, c) + perimeter(grid, r-1, c) + 
                perimeter(grid, r, c+1) + perimeter(grid, r, c-1);
    }
};