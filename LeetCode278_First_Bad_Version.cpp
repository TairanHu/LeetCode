// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        if(n <= 0)
            return 0;
        
        int left = 1;
        int right = n;
        int mid;
        
        while(left <= right)
        {
            mid = left + (right-left)/2;
            if(isBadVersion(mid))
            {
                right = mid -1;
            }
            else
            {
                left = mid + 1;
            }
            
        }
        
        return left;
        
    }
};