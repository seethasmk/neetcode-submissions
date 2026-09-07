class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char ch: tasks){
            freq[ch - 'A']++;
        }
        int maxFreq = 0;
        for(int no: freq){
            maxFreq = max(maxFreq, no);
        }
        int maxCounts = 0;
        for(int no: freq){
            if(no == maxFreq)maxCounts++;
        }
        int spots = (maxFreq - 1)*(n+1) + maxCounts;
        return max(spots, (int)tasks.size());
    }
};
