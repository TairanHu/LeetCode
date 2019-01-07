class Solution {
public:
    int firstUniqChar(string s) {
        
        vector<int> tmp(26, 0);
        for(int i = 0; i < s.size(); i++)
        {
            tmp[s[i]-'a']++;
        }
        
        for(int i = 0; i < s.size(); i++)
        {
            if(tmp[s[i]-'a'] == 1)
                return i;
        }
        return -1;
    }
};