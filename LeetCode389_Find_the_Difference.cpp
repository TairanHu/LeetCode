class Solution {
public:
    char findTheDifference(string s, string t) {
        int res = 0;
        for(int i = 0; i < s.size(); i++)
        {
            res ^= s[i];
        }
        
        for(int i = 0; i < t.size(); i++)
        {
            res ^= t[i];
        }
        
        return (char)res;
        
    }
};


class Solution {
public:
    char findTheDifference(string s, string t) {
        vector<int> tmp(26, 0);
        
        for(int i = 0; i < s.size(); i++)
        {
            tmp[s[i]-'a']++;
        }
        
        for(int i = 0; i < t.size(); i++)
        {
            if(tmp[t[i]-'a'] == 0)
            {
                return t[i];
            }
            tmp[t[i]-'a']--;
        }
        
    }
};