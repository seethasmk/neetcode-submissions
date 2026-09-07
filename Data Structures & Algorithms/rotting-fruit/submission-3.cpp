class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        queue<pair<int, int>> q;
        int fresh = 0;
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }

        vector<pair<int, int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        int mins = 0;
        while(!q.empty() && fresh > 0){
            int size = q.size();
            for(int k = 0; k < size; k++){
                auto [r,c] = q.front();
                q.pop();
                for(auto& p: dirs){
                    int nr = r + p.first;
                    int nc = c + p.second;
                    if(nr >= 0 && nr < rows && nc >=0 && nc < cols && grid[nr][nc] == 1){
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr, nc});
                }
                }
                }
                mins++;
        }
        return (fresh == 0? mins: -1);
    }
};
