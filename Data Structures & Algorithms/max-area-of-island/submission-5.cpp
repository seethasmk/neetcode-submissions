class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int maxArea = 0;
        vector<pair<int, int>> dirs = {{1,0},{-1,0},{0,1},{0,-1}};

        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j]){
                    int area = 0;
                    grid[i][j] = 0;
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while(!q.empty()){
                        auto [r,c] = q.front();
                        q.pop();
                        area++;
                        grid[r][c] = 0;
                        for(auto& d: dirs){
                            int nr = r + d.first;
                            int nc = c + d.second;
                            if(nr >=0 && nr < rows && nc >=0 && nc < cols && grid[nr][nc]){
                                grid[nr][nc] = 0;
                                q.push({nr, nc});
                            }
                        }
                    }
                    maxArea = max(maxArea, area);
                }
            }
        }

        return maxArea;
    }
};
