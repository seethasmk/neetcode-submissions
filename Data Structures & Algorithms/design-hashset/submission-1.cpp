class MyHashSet {
public:
    vector<int> sets;
    MyHashSet() { 
    }
    
    void add(int key) {
        if(sets.size() == 0){
            sets.push_back(key);
            return;
        }
        for(int i=0; i < sets.size(); i++){
            if(sets[i] == key)return;
        }
        sets.push_back(key);
        return;
    }
    
    void remove(int key) {
        if(sets.size() == 0)return;
        for(int i=0; i < sets.size(); i++){
            if(sets[i] == key){
                sets.erase(sets.begin()+i);
                return;
            }
        }
        return;
    }
    
    bool contains(int key) {
        for(int i=0; i < sets.size(); i++){
            if(sets[i] == key)return true;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */