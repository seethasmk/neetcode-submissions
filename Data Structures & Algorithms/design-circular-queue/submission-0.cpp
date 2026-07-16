class MyCircularQueue {
private:
    vector<int> data;
    int front;
    int count;
    int capacity;

public:
    MyCircularQueue(int k) {
        data.resize(k);
        capacity = k;
        front = 0;
        count = 0;
    }
    
    bool enQueue(int value) {
        if(isFull())return false;
        int ind = (front + count)% capacity;
        data[ind] = value;
        count++;
        return true;
    }
    
    bool deQueue() {
        if(isEmpty())return false;
        int ind = (front+1)% capacity;
        front = ind;
        count--;
        return true;
    }
    
    int Front() {
        if(isEmpty())return -1;
        return data[front];
    }
    
    int Rear() {
        if(isEmpty())return -1;
        int ind = (front+ count-1)%capacity;
        return data[ind];
    }
    
    bool isEmpty() {
        return count == 0;
    }
    
    bool isFull() {
        return count == capacity;
    }
};

/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */