class Solution {
public:
    int minDistance(string word1, string word2) {
        
        int size1 = word1.size()+1;
        int size2 = word2.size()+1;
        
        int DP[size1][size2];
        
        for(int i = 0; i < size1; i++)
        {
            DP[i][0] = i;
        }
        for(int i = 0; i < size2; i++)
        {
            DP[0][i] = i;
        }
        
        for(int i = 1; i < size1; i++)
        {
            for(int j = 1; j < size2; j++)
            {
                if (word1[i-1] == word2[j-1])
                {
                    DP[i][j] = DP[i-1][j-1];
                }
                else
                {
                    DP[i][j] = DP[i-1][j-1] + 1;
                }
                DP[i][j] = min(DP[i][j], min(DP[i-1][j]+1, DP[i][j-1]+1));
            }
        }
        return DP[size1-1][size2-1];
        
    }
};