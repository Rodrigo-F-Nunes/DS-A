//I just want to apologize for this code being so ass

class Solution {
public:
    bool isPalindrome(int x) {
     string xString = to_string(x);
     string xStringReversed = xString;
     int stringLength = xString.size() -1;
     for(int i = 0; i < xString.size(); i++){
        xStringReversed[stringLength] = xString[i];
        stringLength= stringLength-1;
     }
     if(xString == xStringReversed){
        return true;
     }
     else{
        return false;
     }
    }
};