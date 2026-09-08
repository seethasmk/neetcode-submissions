/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        int n = intervals.size();
        vector<int> starts(n), ends(n);
        for(int i=0; i < n; i++){
            starts[i] = intervals[i].start;
            ends[i] = intervals[i].end;
        }
        sort(starts.begin(), starts.end());
        sort(ends.begin(), ends.end());
        int sp = 0, ep = 0;
        int currUsage = 0, maxUsage = 0;
        while(sp < n){
            if(starts[sp] < ends[ep]){
                currUsage++;
                maxUsage = max(maxUsage, currUsage);
                sp++;
            }
            else{
                currUsage--;
                ep++;
            }
        }
        return maxUsage;
    }
};
