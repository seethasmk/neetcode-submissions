class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        int fresh = 0;
        int mins = 0;
        queue<pair<int, int>> q;

        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j] == 2){
                    q.push({i,j});
                }
                else if(grid[i][j] ==1)fresh++;
            }
        }

        vector<pair<int,int>> dirs = {{0,1},{1,0},{0,-1},{-1,0}};
        while(!q.empty() && fresh > 0){
            int size = q.size();
            for(int k=0; k < size; k++){
                auto [r,c] = q.front();
                q.pop();
                for(auto& d: dirs){
                    int nr = r + d.first;
                    int nc = c + d.second;
                    if(nr >= 0 && nr < rows && nc >= 0 && nc < cols && grid[nr][nc] == 1){
                        grid[nr][nc] = 2;
                        fresh--;
                        q.push({nr,nc});
                    }
                }
            }
            mins++;
        }

        return fresh == 0? mins: -1;
    }
};
