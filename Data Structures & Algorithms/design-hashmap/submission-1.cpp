class MyHashMap {
public:
    vector<list<pair<int, int>>> buckets;
    int bucketSize = 1000;

    MyHashMap() {
        buckets.resize(bucketSize);
    }

    int hash(int key){
        return key % bucketSize;
    }

    void put(int key, int value) {
        int idx = hash(key);
        for(auto& p: buckets[idx]){
            if(p.first == key){
                p.second = value;
                return;
            }
        }
        buckets[idx].push_back({key, value});
        return;
    }
    
    int get(int key) {
        int idx = hash(key);
        for(auto& p: buckets[idx]){
            if(p.first == key)return p.second;
        }
        return -1;
    }
    
    void remove(int key) {
        int idx = hash(key);
        for(auto it = buckets[idx].begin(); it != buckets[idx].end(); it++){
            if(it -> first == key){
                buckets[idx].erase(it);
                return;
            }
        }
        return;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */