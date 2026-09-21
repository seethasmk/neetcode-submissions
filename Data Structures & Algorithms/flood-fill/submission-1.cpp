class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int o_color = image[sr][sc];
        if(o_color == color){
            return image;
        } 
        dfs(image, sr, sc, o_color, color);
        return image;
    }
    void dfs(vector<vector<int>>& image, int i, int j, int o_color, int color){
        if(i < 0 || i >= image.size() || j < 0 || j >= image[0].size() || image[i][j] != o_color)return;
        image[i][j] = color;
        dfs(image, i+1 , j , o_color, color);
        dfs(image, i-1 , j , o_color, color);
        dfs(image, i , j+1 , o_color, color);
        dfs(image, i , j-1 , o_color, color);
    }
};