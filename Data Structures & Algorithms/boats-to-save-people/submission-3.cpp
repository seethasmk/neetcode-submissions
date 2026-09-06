class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boats = 0;
        sort(people.begin(), people.end(), greater<>());
        int l = 0;
        int r = people.size()-1;
        while(l <= r){
            if((people[l]+ people[r]) <= limit){
                r--;
            } 
            boats++;
            l++;
        }
        return boats;
    }
};