class Solution {
public:
    bool isPerfectSquare(int num) {
        
        if(num == 0 || num == 1)
            return true;
        
        int l = 2;
        int r = num/2;
        
        while(l <= r)
        {
            long mid = (l+r)/2;	//mid*mid maybe exceed INT_MAX
            if(mid*mid == num)
            {
                return true;
            }
            
            if(mid*mid > num)
            {
                r = mid-1;
            }
            else
            {
                l = mid+1;
            }
            
        }
        
        return false;
        
    }
};