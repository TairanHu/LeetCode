class Solution {
public:
    int getSum(int a, int b) {
        
        int tmp1;
        int tmp2;
        
        tmp1 = a&b;
        tmp2 = a^b;
        while(tmp1)
        {
            tmp1 = tmp1 << 1;
            int i = tmp1;
            int j = tmp2;
            tmp1 = i&j;
            tmp2 = i^j;
        }
        return tmp1|tmp2;
        
    }
};