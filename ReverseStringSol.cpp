
class Solution {
public:
    void reverseString(vector<char>& s) {
        
        int i = 0;
        int k = s.size()-1;

        while(i < k){
            char tempLetter = s[i];
            s[i] = s[k];
            s[k] = tempLetter;

            i++;
            k--;
        }
    }
};