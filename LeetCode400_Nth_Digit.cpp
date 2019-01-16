class Solution {
public:
    int findNthDigit(int n) {
        
        int i = 0;
        while(n - (i+1)*9*pow(10, i) > 0)
        {
            n = n - (i+1)*9*pow(10, i);
            i++;
        }
        
        int a = (n-1)/(i+1);
        int b = (n-1)%(i+1);
        int num = pow(10, i) + a;
        
        for(int j = 0; j < i-b; j++)
            num = num/10;
        
        return num%10;
        
    }
};