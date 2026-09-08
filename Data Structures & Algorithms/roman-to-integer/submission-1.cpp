class Solution {
public:
    int romanToInt(string s) {
       unordered_map<char, int> maps = 
       {{'I',1}, {'V',5}, {'X',10}, {'L',50}, {'C',100}, {'D',500}, {'M',1000}};
       int res = 0;
       for(int i=0; i < s.length()-1; i++){
        int curr = maps[s[i]];
        int next = maps[s[i+1]];
        if(curr < next)res -= curr;
        else res += curr;
       }
       return res+maps[s[s.length()-1]];
    }
};