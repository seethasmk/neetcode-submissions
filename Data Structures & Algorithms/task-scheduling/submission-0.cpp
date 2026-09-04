class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        vector<int> freq(26,0);
        for(char ch: tasks){
            freq[ch - 'A']++;
        }
        int maxFreq = 0;
        for(int no: freq){
            maxFreq = max(no, maxFreq);
        }
        int maxCounts = 0;
        for(int no: freq){
            if(no == maxFreq)maxCounts++;
        }
        int slots = (maxFreq-1)*(n+1)+ maxCounts;
        return max(slots, (int)tasks.size());
    }
};
