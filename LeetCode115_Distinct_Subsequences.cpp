class Solution {
public:
    int numDistinct(string s, string t) {
        
        int size_s = s.size();
        int size_t = t.size();
        
        int DP[size_s+1][size_t+1];
        memset(DP, 0, sizeof(DP));
        
        for(int i = 0; i < size_s; i++)
        {
            DP[i][0] = 1;
            for(int j = 0; j < size_t; j++)
            {
                if(s[i] == t[j])
                {
                    DP[i+1][j+1] = DP[i][j] + DP[i][j+1];
                }
                else
                {
                    DP[i+1][j+1] = DP[i][j+1];
                }
            }
        }
        return DP[size_s][size_t];
    }
};