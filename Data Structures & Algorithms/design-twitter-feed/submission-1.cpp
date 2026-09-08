class Twitter {
public:
    int timestamp;
    unordered_map<int, set<int>> following;
    unordered_map<int, vector<pair<int, int>>> tweets;
    Twitter() {    
    }
    void postTweet(int userId, int tweetId) {
        tweets[userId].push_back({timestamp++, tweetId}); 
    }
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int, int>> maxHeap;
        for(auto& p: tweets[userId]){
            maxHeap.push(p);
        }
        for(int x: following[userId]){
            for(auto& p: tweets[x]){
                maxHeap.push(p);
            }
        }
        vector<int> news;
        while(!maxHeap.empty() & news.size() < 10){
            news.push_back(maxHeap.top().second);
            maxHeap.pop();
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
