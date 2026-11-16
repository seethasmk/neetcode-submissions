class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int rows = grid.size();
        int cols = grid[0].size();
        vector<pair<int, int>> dirs = {{0,1}, {0,-1},{1,0},{-1,0}};
        int p = 0;
        for(int i=0; i < rows; i++){
            for(int j=0; j < cols; j++){
                if(grid[i][j]){
                    int cellp = 4;
                    for(auto& d: dirs){
                        int nr = i + d.first;
                        int nc = j + d.second;
                        if(nr >= 0 && nr < rows && nc >=0 && nc < cols && grid[nr][nc])cellp-=1;
                    }
                    p += cellp;
                }
            }
        }
        return p;
    }
};