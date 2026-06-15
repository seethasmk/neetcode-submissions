class MyHashSet {
public:
    vector<int> arr; 
    MyHashSet() { 
    }
    void add(int key) {
        if(arr.size() == 0){
            arr.push_back(key);return;
        }
        else{
            for(int i=0; i < arr.size(); i++){
                if(arr[i] == key)return;
            }
            arr.push_back(key);
            return;
        }
    }
    void remove(int key) {
        if(arr.size() == 0)return;
        else{
            for(int i=0; i < arr.size(); i++){
                if(arr[i] == key)arr.erase(arr.begin()+i);
            }
            return;
        }
    }
    bool contains(int key) {
        for(int i=0; i < arr.size(); i++){
            if(arr[i] == key)return true;
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