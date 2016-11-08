class Solution {
public:
    int divide(int dividend, int divisor) {
        long long result = 0;
        bool flag_positive = 1;
        
        long long dividend1 = dividend;
        long long divisor1 = divisor;
        
        long long shift = 31;
        
        if(divisor == 0)
        {
            return INT32_MAX;
        }
        
        if(dividend < 0)
        {
            dividend1 = -dividend1;
            flag_positive = !flag_positive;
            //cout << flag_positive << endl;
        }
        if(divisor < 0)
        {
            divisor1 = -divisor1;
            flag_positive = !flag_positive;
        }
        
        while(shift >= 0)
        {
            if(dividend1 >= divisor1 << shift)
            {
                dividend1 -= divisor1 << shift;
                result += 1LL<<shift;   //不能直接使用1，1默认是int类型，会溢出
                //cout << result << " ";
            }
            
            shift--;
        }
        
        if(!flag_positive)
        {
            return -result;
            //result = -result;
        }
        
        if(result >= INT32_MAX)
        {
            return INT32_MAX;
        }
        return result;
    }
};