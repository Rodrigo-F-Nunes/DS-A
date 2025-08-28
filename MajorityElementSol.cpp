class Solution {
public:
    int majorityElement(vector<int>& nums) {
        std::unordered_map<int, int> hashMap;
        int num;
        int majority = 0;
        for(auto i : nums){
            hashMap[i] = hashMap[i] + 1;
            if(hashMap[i] > majority) {
            num = i;
            majority = hashMap[i];
            }
        }
        return num;
    }
};