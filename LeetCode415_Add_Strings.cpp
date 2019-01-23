class Solution {
public:
    string addStrings(string num1, string num2) {
        
        string res;
        int len1 = num1.size();
        int len2 = num2.size();
        
        while(len1 > len2)
        {
            num2 = '0' + num2;
            len2++;
        }
        while(len1 < len2)
        {
            num1 = '0' + num1;
            len1++;
        }
        
        int n = 0;
        for(int i = len1-1; i >= 0; i--)
        {
            int tmp = num1[i] - '0' + num2[i] - '0' + n;
            char t = tmp%10 + '0';
            res = t + res;
            n = tmp / 10;   
        }
        cout << n;
        if(n)
            res = '1' + res;
        return res;
    }
};