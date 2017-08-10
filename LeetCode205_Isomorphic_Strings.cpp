class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        char s1[256] = {0};
        char s2[256] = {0};
        
        for(int i = 0; i < s.size(); i++)
        {
            if(s1[s[i]] != s2[t[i]])
            {
                return false;
            }
            s1[s[i]] = i+1;
            s2[t[i]] = i+1;
        }
        return true;
        
    }
};