class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int maxarea = 0;
        int rows = grid.size();
        int cols = grid[0].size();

        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j]){
                    int area = dfs(grid, i, j);
                    maxarea = max(maxarea, area);
                }
            }
        }
        return maxarea;
    }

    int dfs(vector<vector<int>>& grid, int i, int j){
        if(i <0 || i >= grid.size() || j < 0|| j >= grid[0].size()|| grid[i][j] == 0){
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
