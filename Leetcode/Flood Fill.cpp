class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        int prevColor = image[sr][sc];
        fill(image, sr, sc, newColor, prevColor);
        return image;
    }
    
    void fill(vector<vector<int>>& image, int r, int c, int toFill, int prevFill) {
		int rows = image.size();
		int cols = image[0].size();
		
		if (r<0 || r>=rows || c<0 || c>=cols) {
			return;
		}
        
        if(toFill == prevFill)
            return;
        
		if (image[r][c]!=prevFill) {
			return;
		}
        
		image[r][c] = toFill;
		
		fill( image, r-1, c, toFill, prevFill);
		fill( image, r, c+1, toFill, prevFill);
		fill( image, r+1, c, toFill, prevFill);
		fill( image, r, c-1, toFill, prevFill);
	}
};