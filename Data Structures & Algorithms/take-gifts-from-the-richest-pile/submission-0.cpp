class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int> pq;
        int s = 0;
        for(int no: gifts){
            pq.push(no);
        }
        for(int i=0; i < k; i++){
            int val = pq.top();
            pq.pop();
            val = floor(sqrt(val));
            pq.push(val);
        }
        while(!pq.empty()){
            s += pq.top();
            pq.pop();
        }
        return s;
    }
};