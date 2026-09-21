class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int o_color = image[sr][sc];
        if(o_color == color){
            return image;
        }
        queue<pair<int, int>> q;
        vector<pair<int, int>> dirs = {{0,1},{0,-1},{1,0},{-1,0}};
        image[sr][sc] = color;
        q.push({sr, sc});
        while(!q.empty()){
            auto [r,c] = q.front();
            q.pop();
            for(auto& d: dirs){
                int nr = r + d.first;
                int nc = c + d.second;
                if(nr >=0 && nr < image.size() && nc >=0 && nc < image[0].size() && image[nr][nc] == o_color){
                    image[nr][nc] = color;
                    q.push({nr, nc});
                }
            } 
        }
        return image;
    }
};