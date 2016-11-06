class Solution {
public:
    int reverse(int x) {
        
        int num = x;
        string a;
        
        if(num == -2147483648)
        {
            return 0;
        }
        
        if(num < 0)
        {
            num = -num;
        }
        
        while(num)
        {
            a += num%10 + '0';
            num = num/10;
        }
        num = 0;
        for(int i = 0; i < a.size(); i++)
        {
            if(214748364 < num )
            {
                num = 0;
                break;
            }
            num = num*10;
            num += a[i] - '0';
        }
        if(x < 0)
        {
            return -num;
        }
        return num;
        
    }
};