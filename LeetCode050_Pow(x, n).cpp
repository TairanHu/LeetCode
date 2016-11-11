
//迭代尝试多次未果，最终还是采用递归

class Solution {
public:
    double myPow(double x, int n) {
        if(n < 0)
        {
            return 1/power(x, -n);
        }
        return power(x, n);
    }
    
    double power(double x, int n)
    {
        if(n == 0)
        {
            return 1;
        }
        double half = power(x, n/2);
        if(n%2)
        {
            return x*half*half;
        }
        return half*half;
    }
    
};