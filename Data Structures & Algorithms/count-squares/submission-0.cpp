class CountSquares {
public:
    unordered_map<int, unordered_map<int, int>> points;
    CountSquares() {
        
    }
    void add(vector<int> point) {
        points[point[0]][point[1]]++;
    }
    
    int count(vector<int> point) {
        int x = point[0], y = point[1];
        int total = 0;
        for(auto& [y2,count]:points[x]){
            if(y2 == y)continue;
            int side = y2-y;
            if(points.count(x+side) && points[x+side].count(y) && points[x+side].count(y2)){
                total += count * points[x+side][y] * points[x+side][y2];
            }
            if(points.count(x-side)&& points[x-side].count(y) && points[x-side].count(y2)){
                total += count * points[x-side][y] * points[x-side][y2];
            }
        }
        return total;
    }
};
