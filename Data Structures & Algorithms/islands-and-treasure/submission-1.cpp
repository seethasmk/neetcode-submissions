class Solution {
public:
    void islandsAndTreasure(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j] == 0){
                    q.push({i, j});
                }
            }
        }

        vector<pair<int, int>> dirs = {{0,1}, {0,-1}, {1,0}, {-1,0}};
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            for(auto& d: dirs){
                int nr = r + d.first;
                int nc = c + d.second;
                if(nr >=0 && nr < rows && nc >=0 && nc < cols && grid[nr][nc] == INT_MAX){
                    grid[nr][nc] = grid[r][c] + 1;
                    q.push({nr, nc});
                }
            }
        }
    }
};
