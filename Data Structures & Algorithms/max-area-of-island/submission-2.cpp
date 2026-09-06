class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxArea = 0;
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j]){
                    int area = dfs(grid, i , j);
                    maxArea = max(area, maxArea);
                }
            }
        }
        return maxArea;
    }

    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i < 0 || j < 0 || i >= grid.size() || j >= grid[0].size() || grid[i][j] == 0){
            return 0;
        }
        grid[i][j] = 0;
        int a = 1;
        a += dfs(grid, i+1, j);
        a += dfs(grid, i-1, j);
        a += dfs(grid, i, j+1);
        a += dfs(grid, i, j-1);
        return a;
    }
};
