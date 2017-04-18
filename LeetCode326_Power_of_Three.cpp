class Solution {
public:
    bool isPowerOfThree(int n) {
        
        if(n <= 0)
        {
            return false;
        }
        
        long long big3 = 1162261467;
        
        return !(big3%n);
        
    }
};