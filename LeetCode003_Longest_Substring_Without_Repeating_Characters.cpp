class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        for(int i = 0; i < s.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(s[j] == s[i])
                {
                    return i-j;
                }
            }
        }
        return s.size();
    }
};
