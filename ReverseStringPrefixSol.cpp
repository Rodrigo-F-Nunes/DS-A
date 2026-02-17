class Solution {
public:
    string reversePrefix(string s, int k) {
        //a simple for loop with swap would also work.. but i wanted to try using a stack :D
        
        if(s.empty() || k == 0){
            return s;
        }
        std::string reversed;
        std::stack<char> stck;
        for(int i = 0; i < k; i++){
            stck.push(s[i]);
        }
        while(!stck.empty()){
            reversed += stck.top();
            stck.pop();
        }
        while(k < s.size()){
            reversed.push_back(s[k]);
            k++;
        }
        return reversed;
    }
};