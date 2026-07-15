class LRUCache {
private:
    struct Node{
        int key;
        int val;
        Node* prev;
        Node* next;
        Node(int k, int v): key(k), val(v), prev(nullptr), next(nullptr){}
    };
    int capacity;
    unordered_map<int, Node*> map;
    Node* head;
    Node* tail;

public:
    LRUCache(int capacity) {
        this -> capacity = capacity;
        head = new Node(-1,-1);
        tail = new Node(-1,-1);
        head -> next = tail;
        tail -> prev = head;
    }
    
    void removeNode(Node* node){
        node -> prev -> next = node -> next;
        node -> next -> prev = node -> prev;
    }

    void addToFront(Node* node){
        Node* extra = head -> next;
        head -> next = node;
        node -> prev = head;
        node -> next = extra;
        extra -> prev = node;
    }

    int get(int key) {
        if(map.count(key)){
            removeNode(map[key]);
            addToFront(map[key]);
            return map[key]-> val;
        }
        else return -1;
    }
    
    void put(int key, int value) {
        if(map.count(key)){
            map[key] -> val = value;
            removeNode(map[key]);
            addToFront(map[key]);
        }
        else{
            Node* newNode = new Node(key, value);
            map[key]= newNode;
            addToFront(newNode);
            if(map.size() > capacity){
                Node* lru = tail -> prev;
                int evictkey = lru -> key;
                removeNode(tail -> prev);
                map.erase(evictkey);
                delete lru;
            }
        }
    }
};
