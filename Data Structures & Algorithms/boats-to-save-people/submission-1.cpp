class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        sort(people.begin(), people.end(), greater<>());
        int l = 0;
        int r = people.size()-1;
        int c =0;
        while(l <= r){
            if((people[r] + people[l]) <= limit){
                r--;
            }
            l++;
            c++;
        }
        return c;
    }
};