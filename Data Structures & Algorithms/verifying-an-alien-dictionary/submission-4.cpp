class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        int rank[26];
        for(int i=0; i <= 25; i++){
            rank[order[i] - 'a'] = i;
        }
        for(int i=0; i < words.size()-1; i++){
            string& a = words[i];
            string& b = words[i+1];
            int len = min(a.length(), b.length());
            bool found = false;
            for(int j=0; j < len; j++){
                if(a[j] != b[j]){
                    if(rank[a[j] - 'a'] > rank[b[j]- 'a'])return false;
                    found = true;
                    break;
                }
            }
            if(!found && a.length() > b.length())return false;
        }
        return true;
    }
};