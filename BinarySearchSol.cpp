class Solution {
public:
    int search(vector<int>& nums, int target) {
        int leftP = 0;
        int rightP = nums.size() -1;
        while(leftP <= rightP){
            int middle = ((leftP + rightP) /2);
            if(nums[middle] == target){
                return middle; //"return nums[middle]" returns the element you stupid fuck
            }
            if(nums[middle] < target){
                leftP = middle + 1; 
            }
            if(nums[middle] > target){
                rightP = middle - 1;
            }
        }
        return -1;
    }
};