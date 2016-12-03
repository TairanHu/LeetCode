class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        
        while(!s.empty() && isspace(s.back()) )
        {
            s.pop_back();
        }
        
        while(!s.empty() && !isspace(s.back()))
        {
            count++;
            s.pop_back();
        }
        
        return count;
        
    }
};