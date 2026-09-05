class Twitter {
public:
    int timestamp = 0;
    unordered_map<int, set<int>> following;
    unordered_map<int, vector<pair<int, int>>> tweets;
    Twitter() {
        
    }
    
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({timestamp++, tweetId});
    }
    
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> pq;
        for(auto& [time, ids]:tweets[userId]){
            pq.push({time, ids});
        }
        for(int id: following[userId]){
            for(auto& [time, ids]: tweets[id]){
                pq.push({time, ids});
            }
        }
        int c = 10;
        vector<int> news;
        while(c > 0 && !pq.empty()){
            news.push_back(pq.top().second);
            pq.pop();
            c--;
        }
        return news;
    }
    
    void follow(int followerId, int followeeId) {
        following[followerId].insert(followeeId);
    }
    
    void unfollow(int followerId, int followeeId) {
        following[followerId].erase(followeeId);
    }
};
