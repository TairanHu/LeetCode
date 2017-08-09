class Solution {
public:
    bool isHappy(int n) {
        
        while(n >= 10)
        {
            int tmp = 0;
            while(n)
            {
                tmp += (n%10)*(n%10);
                n = n/10;
            }
            
            n = tmp;                                  
        }
        if(n == 1 || n == 7)
            return true;
        return false;
    }
};