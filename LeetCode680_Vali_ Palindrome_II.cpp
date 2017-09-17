class Solution {
public:
    bool validPalindrome(string s) {
        
        if(s.size() <= 2)
        {
            return true;
        }
        
        int l = 0; 
        int r = s.size()-1;
        bool lflag = 0;
        bool rflag = 0;
        
        while(l < r)
        {
            if(s[l] == s[r])
            {                
                l++;
                r--;
                continue;
            }
            
            int l1 = l+1;
            int r1 = r;
            while(l1 < r1)
            {
                if(s[l1] == s[r1])
                {                
                    l1++;
                    r1--;
                    continue;
                }
                else
                {
                    lflag = 1;
                    break;
                }
            }
            
            l1 = l;
            r1 = r-1;
            while(lflag && l1 < r1)
            {
                if(s[l1] == s[r1])
                {                
                    l1++;
                    r1--;
                    continue;
                }
                else
                {
                    rflag = 1;
                    break;
                }
            }
            
            if(lflag && rflag)
                return false;
            else
                return true;
            
                
        }
        
        return true;
    }
};