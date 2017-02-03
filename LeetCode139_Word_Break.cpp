class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        
        if(s.size() == 0 || wordDict.size() == 0)
        {
            return false;
        }
        
        int DP[s.size()];
        memset(DP, 0, sizeof(DP));
        
        for(int i = 0; i < s.size(); i++)
        {
            if( find(wordDict.begin(), wordDict.end(), s.substr(0, i+1)) != wordDict.end() )
            {
                DP[i] = 1;
            }
            else
            {
                for(int j = 0; j < i; j++)
                {
                    if( DP[j] == 1 )
                    {
                        if( find(wordDict.begin(), wordDict.end(), s.substr(j+1, i-j)) != wordDict.end() )
                        {
                            DP[i] = 1;
                            break;
                        }
                        
                    }
                }
            }
        }
        
        return DP[s.size()-1];
        
    }
};