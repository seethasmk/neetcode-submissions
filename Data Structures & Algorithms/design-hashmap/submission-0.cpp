struct Node{
    int key, val;
    Node* next;
    Node(int k, int v): key(k), val(v), next(nullptr){}
};

class MyHashMap {
public:
    int sz = 1009;
    vector<Node*> buckets;

    int hash(int key){
        return key % sz;
    }

    MyHashMap() {
        buckets.resize(sz, nullptr);
    }

    void put(int key, int value) {
        int index = hash(key);
        Node* curr = buckets[index];

        while(curr != nullptr){
            if(curr -> key == key){
                curr -> val = value;
                return;
            }
            curr = curr -> next;
        }

        Node* newNode = new Node(key, value);
        newNode -> next = buckets[index];
        buckets[index] = newNode;
    }
    
    int get(int key) {
        int index = hash(key);
        Node* curr = buckets[index];
        while(curr != nullptr){
            if(curr -> key == key){
                return curr -> val;
            }
            curr = curr-> next;
        }
        return -1;
    }
    
    void remove(int key) {
        int index = hash(key);
        Node* curr = buckets[index];
        Node* prev = nullptr;

        while(curr != nullptr){
            if(curr -> key == key){
                if(prev == nullptr){
                    buckets[index] = curr -> next;
                }
                else{
                    prev -> next = curr -> next;
                }
                delete curr;
                return;
            }
            prev = curr;
            curr = curr -> next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */