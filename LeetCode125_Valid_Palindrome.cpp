class Solution {
public:
    bool isPalindrome(string s) {
        
        int l = 0;
        int r = s.size()-1;
        
        while(l < r)
        {
            while(!(isalpha(s[l]) || isalnum(s[l])) && l < s.size())
                l++;
            
            if(l == s.size())
                return true;
            
            while(!(isalpha(s[r]) || isalnum(s[r])))
                r--;
            
            if(tolower(s[l]) != tolower(s[r]))
                return false;  
            
            l++;
            r--;
            
        }
        
        return true;
        
    }
};