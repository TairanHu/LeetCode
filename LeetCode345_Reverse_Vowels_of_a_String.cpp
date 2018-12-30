class Solution {
public:
    string reverseVowels(string s) {
        string res = s;
        
        int l = 0;
        int r = s.size()-1;
        while(l < r)
        {
            while(l < r && s[l] != 'a' && s[l] != 'e' && s[l] != 'i' && s[l] != 'o' && s[l] != 'u' && s[l] != 'A' && s[l] != 'E' && s[l] != 'I' && s[l] != 'O' && s[l] != 'U')
            {
                l++;
            }
            
            while(l < r && s[r] != 'a' && s[r] != 'e' && s[r] != 'i' && s[r] != 'o' && s[r] != 'u' && s[r] != 'A' && s[r] != 'E' && s[r] != 'I' && s[r] != 'O' && s[r] != 'U')
            {
                r--;
            }
            
            if(l < r)
            {
                res[l] = s[r];
                res[r] = s[l];
                l++;
                r--;
            }
        }
        
        return res;
        
    }
};