class Solution {
public:
    int uniquePaths(int m, int n) {
        
        int result[m][n] = {0};
        
        for(int i = 0; i < m; i++)
        {
            result[i][0] = 1;
        }
        for(int i = 0; i < n; i++)
        {
            result[0][i] = 1;
        }
        
        for(int i = 1; i < m; i++)
        {
            for(int j = 1; j < n; j++)
            {
                result[i][j] = result[i-1][j] + result[i][j-1];
            }
        }
        
        return result[m-1][n-1];
        
    }
    
};

/*
class Solution {
public:
    int uniquePaths(int m, int n) {
        
        double count = 1;
        double Denominator = 1;
        int small_num = m > n ? n : m;
        
        for(int i = 1; i < small_num; i++)
        {
            count *= m+n-i-1;
            Denominator *= i;
        }
        
        return (int)(count/Denominator);
    }
};
*/