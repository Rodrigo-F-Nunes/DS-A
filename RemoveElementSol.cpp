class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        auto rem = remove(nums.begin(), nums.end(), val);
        nums.erase(rem, nums.end());
        return nums.size();
    }
};