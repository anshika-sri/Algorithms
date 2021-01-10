/**
Runtime: 0 ms, faster than 100.00% of C++ online submissions for Minimum Add to Make Parentheses Valid.
Memory Usage: 6.5 MB, less than 57.40% of C++ online submissions for Minimum Add to Make Parentheses Valid.
*/


class Solution {
public:
    int minAddToMakeValid(string S) {
        int count = 0, inv = 0;
        for(int i = 0; i< S.length(); i++) {
            if(count == 0 && S[i] == ')')  {
                inv++;
            }
            else if(S[i] == '(') {
                count++;
            }
            else { 
                count--;
            }
        }
        return count + inv;
        
    }
};
