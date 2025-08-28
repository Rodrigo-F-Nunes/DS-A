class MyHashSet {
public:
    std::vector<int> storageForSet;
    MyHashSet() {
    }
    void add(int key) {
        if(!contains(key)){
           storageForSet.push_back(key);
        }
    }
    void remove(int key) {
        if(contains(key)){
            storageForSet.erase(std::remove(storageForSet.begin(), storageForSet.end(), key), storageForSet.end());
        }
    }
    bool contains(int key) {
        for(auto n : storageForSet){
            if(n == key){
                return true;
            }
        }
            return false;
    }
};
