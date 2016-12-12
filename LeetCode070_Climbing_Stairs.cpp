
//动态规划，dp[n] = dp[n-1] + dp[n-2]
class Solution {
public:
    int climbStairs(int n) {
        
        int count[n+1] ={0};
        count[0] = 1;
        count[1] = 1;
        
        for(int i = 2; i <= n; i++)
        {
            count[i] = count[i-1] + count[i-2];
        }
        return count[n];
    }
};


//求组合数越界，应采用C(n,m)=C(n-1,m-1)+C(n-1,m)
class Solution {
public:
    int climbStairs(int n) {
        
        int count = 0;
        
        for(int i = 0; i <= n/2; i++)
        {
            count += get_combination(n-i, i);
        }
        
        
        return count;
    }
    
    int get_combination(int n, int m)
    {
        int mm = m > (n-m) ? (n-m) :m;
        int nn = n - mm;
        long long int num = 1;
        while(n > nn)
        {
            num *= (n--);
        }
        
        while(mm > 0)
        {
            num /= (mm--);
        }
        
        return num;
    }
};