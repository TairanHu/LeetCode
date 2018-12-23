class Solution {
public:
    string longestPalindrome(string s) {
        
        if(s.size() == 0)
            return "";
        
        int start = 0;
        int len = 1;
        int s_len = s.size();
        vector<int> tmp(s_len, 0);
        vector<vector<int>> dp(s_len, tmp);
        
        for(int i = 0; i < s_len; i++)
        {
            dp[i][i] = 1;
            if(i+1 < s_len && s[i] == s[i+1])
            {
                dp[i][i+1] = 1;
                start = i;
                len = 2;
            }
        }
        
        for(int i = s_len-2; i >= 0; i--)
        {
            for(int j = i+2; j < s_len; j++)
            {
                if(dp[i+1][j-1] && s[i] == s[j])
                {
                    dp[i][j] = 1;
                    if(j-i+1 > len)
                    {
                        start = i;
                        len = j-i+1;
                    }
                }
            }
        }
        
        return s.substr(start, len);
    }
};