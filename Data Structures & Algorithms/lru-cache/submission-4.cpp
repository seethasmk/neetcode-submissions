class LRUCache {
public:
    struct Node{
        int key, val;
        Node* next;
        Node* prev;
        Node(int k, int v): key(k), val(v), prev(nullptr), next(nullptr){}
    };
    int capacity;
    Node* head;
    Node* tail;
    unordered_map<int, Node*> cache;

    LRUCache(int capacity) {
        this -> capacity = capacity;
        head = new Node(-1, -1);
        tail = new Node(-1, -1);
        head -> next = tail;
        tail -> prev = head;
    }

    void removeNode(Node* node){
        node -> prev -> next = node -> next;
        node -> next -> prev = node -> prev;
    }

    void insertAtFront(Node* node){
        node -> next = head -> next;
        node -> prev = head;
        head -> next -> prev = node;
        head -> next = node;
    }
    
    int get(int key) {
        if(cache.find(key) == cache.end())return -1;
        Node* node = cache[key];
        removeNode(node);
        insertAtFront(node);
        return node -> val;
    }
    
    void put(int key, int value) {
        if(cache.find(key) != cache.end()){
            Node* node = cache[key];
            node -> val = value;
            removeNode(node);
            insertAtFront(node);
        }
        else{
            if(cache.size() == capacity){
                Node* lru = tail -> prev;
                removeNode(lru);
                cache.erase(lru -> key);
                delete lru;
            }
            Node* newNode = new Node(key, value);
            insertAtFront(newNode);
            cache[key] = newNode;
        }
    }
};
