class Solution {
public:
    int missingNumber(vector<int>& nums) {
        set<int> setN (nums.begin(), nums.end());
        for(int i = 0; i <= setN.size(); ++i) {
            if(setN.count(i) == 0) {
                return i;
            }
        }
        return{};
    }
};
//I know it's slower than just using a for loop through the vector and comparing it, but I'm trying to learn hashsets