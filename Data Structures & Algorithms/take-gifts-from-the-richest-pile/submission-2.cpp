class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq(gifts.begin(), gifts.end());
        long long s = 0;
        while(k--){
            int val = pq.top();pq.pop();
            pq.push(floor(sqrt(val)));
        }
        while(!pq.empty()){
            s += pq.top();pq.pop();
        }
        return s;
    }
};