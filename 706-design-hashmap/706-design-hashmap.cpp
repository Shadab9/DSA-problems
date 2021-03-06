class MyHashMap {
public:
    vector<int>hashMap;
    MyHashMap() {
        hashMap.resize(1000001,-1);
    }
    
    void put(int key, int value) {
        hashMap[key]=value;
    }
    
    int get(int key) {
        if(hashMap[key]!=-1)
        return hashMap[key];
        return -1;
        
    }
    
    void remove(int key) {
        hashMap[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */