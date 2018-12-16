class Solution {
public:
    int numSquares(int n) {
        
        vector<int> res;
        res.push_back(0);
        for(int i = 1; i <= n; i++)
            res.push_back(i);
        
        for(int i = 2; i <= n; i++)
        {
            for(int j = 1; j*j <= i; j++)
            {
                res[i] = res[i] < (res[i-j*j]+1) ? res[i] : (res[i-j*j]+1);
            }
        }
        
        return res[n];
    }
};



//Lagrange's four-square theorem
// 4^k(8m+7)
class Solution {
public:
    int numSquares(int n) {
        
        while(n % 4 == 0)
            n /= 4;
        
        if(n % 8 == 7)
            return 4;
        
        for(int i = 0; i*i < n; i++)
        {
            int j = sqrt(n - i*i);
            if(j*j + i*i == n)
                return (i == 0 ? 0 : 1) + (j == 0 ? 0 : 1);
        }
        
        return 3;
    }
};