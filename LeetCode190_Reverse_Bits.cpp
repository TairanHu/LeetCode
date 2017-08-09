class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t res = 0;
        int count = 0;
        
        while(n)
        {
            res *= 2;
            res += n & 1;
            count++;
            n = n>>1;
        }
        
        res *= pow(2,32-count);
        
        return res;
        
    }
};