class Solution {
public:
    bool isPalindrome(string s) {
        int LP = 0;
        int RP = s.size() - 1;
        while (LP < RP){
            while(LP < RP && !isalnum(s[LP])){
                LP++;
            } //stupid edge cases on which the whole string is fucking special characters
            while(LP < RP &&!isalnum(s[RP])){
                RP--;
            }
            if(tolower(s[LP]) != tolower(s[RP])){
                return false;
            }
            LP++;
            RP--;
        }
        return true;
    }
};
