class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int count = 0;
        vector<pair<int, int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};

        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j] == '1'){
                    count++;
                    grid[i][j] = '0';
                    queue<pair<int, int>> q;
                    q.push({i, j});

                    while(!q.empty()){
                        auto [r,c] = q.front();
                        q.pop();
                        for(auto& d: dirs){
                            int nr = r + d.first;
                            int nc = c + d.second;
                            if(nr >=0 && nr < rows && nc >=0 && nc < cols && grid[nr][nc] == '1'){
                                grid[nr][nc] = '0';
                                q.push({nr, nc});
                            }
                        }
                    }
                }
            }
        }

        return count;
    }
};
