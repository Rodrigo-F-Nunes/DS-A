class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int numsToIgnore = arr.size() / 20;
        double sumToIgnore = 0;
        for(int i = numsToIgnore; i < arr.size() - numsToIgnore; i++){
            sumToIgnore += arr[i];
        }
        sumToIgnore = sumToIgnore / (arr.size() - numsToIgnore * 2);
        return sumToIgnore;
    }
};