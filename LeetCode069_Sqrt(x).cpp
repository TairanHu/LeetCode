class Solution {
public:
    int mySqrt(int x) {
        long long int i = 0;
        long long int j = x/2 + 1;
        long long mid;
        
        while(i <= j)
        {
            mid = (i+j)/2;
            long long tmp = mid*mid;
            
            if(tmp == x)
            {
                return mid;
            }
            else if(tmp < x)
            {
                i = mid+1;
            }
            else
            {
                j = mid-1;
            }
        }
        return j;
        
    }
};




class Solution {
public:
    int mySqrt(int x) {
        
        if(x == 0)
        {
            return 0;
        }
        
        double last = 0;
        double res = 1;
        
        while(res != last)
        {
            last = res;
            res = (res + x / res) / 2;
        }
        
        return (int)res;
    }
};