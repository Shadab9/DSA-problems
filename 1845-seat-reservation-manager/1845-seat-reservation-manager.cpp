class SeatManager {
public:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    SeatManager(int n) {
        for(int i=1; i<=n; i++) minHeap.push(i);
    }
    
    int reserve() {
        int temp = minHeap.top();
        minHeap.pop();
        return temp;
    }
    
    void unreserve(int seatNumber) {
        minHeap.push(seatNumber);
    }
};
;

/**
 * Your SeatManager object will be instantiated and called as such:
 * SeatManager* obj = new SeatManager(n);
 * int param_1 = obj->reserve();
 * obj->unreserve(seatNumber);
 */