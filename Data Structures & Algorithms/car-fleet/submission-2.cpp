class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int n = position.size();
        vector<pair<int,int>> cars;
        int fleets = 0;
        double currFleetTime = 0;
        for(int i=0; i < n;i++){
            cars.push_back({position[i], speed[i]});
        }
        sort(cars.begin(), cars.end(), greater<pair<int,int>>());
        for(auto& [pos, spd]: cars){
            double time = (target - pos)/(double)spd;
            if(time > currFleetTime){
                fleets++;
                currFleetTime = time;
            }
        }
        return fleets;
    }
};
