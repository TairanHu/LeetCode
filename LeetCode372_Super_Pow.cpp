class Solution {
public:
    int superPow(int a, vector<int>& b) {
        
        long long res = 1;
        for(int i = 0; i < b.size(); i++)
        {
            res = power(res, 10) * power(a, b[i]) % 1337;
        }
        
        return res;
        
    }
    
    long long power(int x, int n)
    {
        if (n == 0) 
            return 1;
        
        if (n == 1) 
            return x % 1337;
        
        return power(x % 1337, n / 2) * power(x % 1337, n - n / 2) % 1337;
    }
    
};