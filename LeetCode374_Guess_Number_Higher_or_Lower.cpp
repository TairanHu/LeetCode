// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        
        int l = 1;
        int r = n;
        int mid;
        while(1)
        {
            mid = l + (r-l)/2;
            int tmp = guess(mid);
            if(tmp < 0)
                r = mid-1;
            else if(tmp > 0)
                l = mid+1;
            else
                break;
        }
        
        return mid;
        
    }
};